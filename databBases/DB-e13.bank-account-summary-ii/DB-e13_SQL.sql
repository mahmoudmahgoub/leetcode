SELECT name, sum(amount) as balance from Users join Transactions on Users.account = Transactions.account group by Transactions.account 
having balance > 10000
