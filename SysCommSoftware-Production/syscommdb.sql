-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Dec 06, 2021 at 11:52 AM
-- Server version: 10.4.22-MariaDB
-- PHP Version: 8.0.13

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `syscommdb`
--

-- --------------------------------------------------------

--
-- Table structure for table `cd1001`
--

CREATE TABLE `cd1001` (
  `date` varchar(255) NOT NULL,
  `timein` varchar(255) DEFAULT NULL,
  `timeout` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `cd1001`
--

INSERT INTO `cd1001` (`date`, `timein`, `timeout`) VALUES
('12 - 06 - 2021', '5:08 PM', '5:41 PM');

-- --------------------------------------------------------

--
-- Table structure for table `cs1001`
--

CREATE TABLE `cs1001` (
  `date` varchar(255) NOT NULL,
  `timein` varchar(255) DEFAULT NULL,
  `timeout` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `cs1001`
--

INSERT INTO `cs1001` (`date`, `timein`, `timeout`) VALUES
('12 - 06 - 2021', '6:17 PM', '6:32 PM');

-- --------------------------------------------------------

--
-- Table structure for table `ew1001`
--

CREATE TABLE `ew1001` (
  `date` varchar(255) NOT NULL,
  `timein` varchar(255) DEFAULT NULL,
  `timeout` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `gd1001`
--

CREATE TABLE `gd1001` (
  `date` varchar(255) NOT NULL,
  `timein` varchar(255) DEFAULT NULL,
  `timeout` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `ge1001`
--

CREATE TABLE `ge1001` (
  `date` varchar(255) NOT NULL,
  `timein` varchar(255) DEFAULT NULL,
  `timeout` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `it1001`
--

CREATE TABLE `it1001` (
  `date` varchar(255) NOT NULL,
  `timein` varchar(255) DEFAULT NULL,
  `timeout` varchar(255) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- --------------------------------------------------------

--
-- Table structure for table `syscommtable`
--

CREATE TABLE `syscommtable` (
  `firstname` varchar(255) NOT NULL,
  `lastname` varchar(255) NOT NULL,
  `fullname` varchar(255) NOT NULL,
  `department` varchar(255) NOT NULL,
  `salary` decimal(10,2) NOT NULL,
  `contact` varchar(255) NOT NULL,
  `password` varchar(255) NOT NULL,
  `datehired` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Dumping data for table `syscommtable`
--

INSERT INTO `syscommtable` (`firstname`, `lastname`, `fullname`, `department`, `salary`, `contact`, `password`, `datehired`) VALUES
('Sebastian', 'Abuyo', 'Sebastian Abuyo', 'Clownery Department', '9000000.00', '099847556', 'CD1001', '1804-06-05'),
('Jay', 'Rico', 'Jay Rico', 'Computer Science', '45000.00', '098745656', 'CS1001', '2021-12-04'),
('Harold', 'Maralit', 'Harold Maralit', 'Essay Writing', '45000.00', 'haroldmaralit@gmail.com', 'EW1001', '2021-02-10'),
('Gymuel', 'De Guzman', 'Gymuel De Guzman', 'Graphics Designer', '45000.00', '099847568', 'GD1001', '2020-03-04'),
('Alessandra', 'Roman', 'Alessandra Roman', 'Genshin Enthusiast', '56000.00', '899605354', 'GE1001', '2021-06-16'),
('Nathaniel', 'Ireneo', 'Nathaniel Ireneo', 'Information Technology', '37000.00', '0994758545', 'IT1001', '2021-12-05');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `cd1001`
--
ALTER TABLE `cd1001`
  ADD PRIMARY KEY (`date`);

--
-- Indexes for table `cs1001`
--
ALTER TABLE `cs1001`
  ADD PRIMARY KEY (`date`);

--
-- Indexes for table `ew1001`
--
ALTER TABLE `ew1001`
  ADD PRIMARY KEY (`date`);

--
-- Indexes for table `gd1001`
--
ALTER TABLE `gd1001`
  ADD PRIMARY KEY (`date`);

--
-- Indexes for table `ge1001`
--
ALTER TABLE `ge1001`
  ADD PRIMARY KEY (`date`);

--
-- Indexes for table `it1001`
--
ALTER TABLE `it1001`
  ADD PRIMARY KEY (`date`);

--
-- Indexes for table `syscommtable`
--
ALTER TABLE `syscommtable`
  ADD PRIMARY KEY (`password`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
