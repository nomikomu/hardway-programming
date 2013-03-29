for the_number = 1, 10, 2 do
  print("The number is now ", the_number)
end

max = 9
increm = 5

for number = 1, max, increm do
  print("Typo: ", number)
end

--[[ hashtag for len of list]]

bag = {'gravitys rainbow','chocolate','jazz','choco choco'}
print('I huv '..#bag..' stuff. :3')

--if, else statment

function SayHiTo(name)
  if name then
    print('Hello ',name)
  else
    print('Hello stranger')
  end
end
SayHiTo("Jack")
SayHiTo()

--[[

  math.sqrt(number) returns the square root of the number.
  table.insert(table, element) inserts the object element into the table table
  table.sort(table) sorts a table of numbers in ascending order.

]]


