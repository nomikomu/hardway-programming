function love.load()
  image = love.graphics.newImage('images/nature_alley.jpg')
  local f = love.graphics.newFont(12)
  love.graphics.setFont(f)
  love.graphics.setColor(0,0,255)
  love.graphics.setBackgroundColor(255,255,255)
end

function love.update(dt)
  if gameIsPaused then return end
  if love.keyboard.isDown("up") then
    num = num + 100 * dt
  end
en

function love.mousepressed(x,y,button)
  if button == 'l' then
    imgx = x
    imgy = y
  end
end

function love.mousereleased(x,y,button)
  if button == 'l' then
    fireSlingshot(x,y)
  end
end

function love.keypressed(key, unicode)
  if key == 'b' then
    text = "The B key was pressed."
  elseif key == 'a' then
    a_down = true
  end
end

function love.keyreleased(key, unicode)
  if key == 'b' then
    text = 'The B key was released.'
  elseif key == 'a' then
    a_down = false
  end
end

function love.focus(f) gameIsPaused = not f end

function love.quit()
  print("Thanks for playing! Come back soon!")
end

function love.draw()
  love.graphics.print("this txt is not black", 100, 100)
  love.graphics.setColor(255,0,0)
  love.graphics.print("thix txt is red", 100, 200)
end

-- main loop

function love.run()
  math.randomseed(os.time())
  math.random() math.random()

  if love.load then love.load(arg) end
  local dt = 0
  -- [[main loop in love.run :3]]
  while true do
    if love.event then
      love.event.pump()
      for e,a,b,c,d in love.event.poll() do
        if e == 'quit' then
          if not love.quit or not love.quit() then
            if love.audio then
              love.audio.stop()
            end
            return
          end
        end
        love.handlers[e](a,b,c,d)
      end
    end
    
  if love.timer then
    love.timer.step()
    dt = love.timer.getDelta()
  end
  end
end
