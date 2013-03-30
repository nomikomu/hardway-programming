#!/usr/bin/env ruby
class MegaGreeter
  attr_accessor :names
  def initialize(names="world")
    @names = names
  end
  def say_hi
    if @names.nil?
      puts "..."
    elsif @names.respond_to?("each")
      #@names is a list of some kind,iterate!
      @names.each do |name|
        puts "hello #{name}!"
      end
    else
      puts "Hello #{@names}"
    end
  end

  def say_bye
    if @names.nil?
      puts "..."
    elsif @names.respond_to?("join")
      # join the list with commas
      puts "Goodbye #{names.join(", ")}. Come back soon!"
    else
      puts "Goodbye #{@names}. Come back soon!"
    end
  end
end

if __FILE__ == $0
  mg = MegaGreeter.new
  mg.say_hi
  mg.say_bye
  # name > "Phil"
  mg.names = "Phil"
  mg.say_hi
  mg.say_bye
  # name > list
  mg.names = ['Charles','nigga','Roberts',
    'Robin','Batman']
  mg.say_hi
  mg.say_bye
  # name > nil
  mg.names = nil
  mg.say_hi
  mg.say_bye
end
