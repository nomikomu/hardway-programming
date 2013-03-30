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
