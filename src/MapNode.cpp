/*
 BSD 3-Clause License
 Copyright (c) 2018, Rohitkrishna Nambiar,  Harsh Kakashaniya
 All rights reserved.
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright notice, this
 list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice,
 this list of conditions and the following disclaimer in the documentation
 and/or other materials provided with the distribution.
 * Neither the name of the copyright holder nor the names of its
 contributors may be used to endorse or promote products derived from
 this software without specific prior written permission.
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 *  @file    main.cpp
 *  @author  Harsh Kakashaniya and Rohitkrishna Nambiar
 *  @date    12/04/2018
 *  @version 1.0
 *  @copyright BSD 3-Clause
 *
 *  @brief main file for running prometheus_frontier_exploration package
 *
 *  @section DESCRIPTION
 *
 *  Mapnode file for prometheus_frontier_exploration package. this is
 *  responsible for
 }
 */
#include <MapNode.hpp>

MapNode::MapNode() {
  //TODO constructor
}

MapNode::~MapNode() {
  //TODO destructor
}

float MapNode::getX() {
  //TODO to get X
  return 1.0;
}

float MapNode::getY() {
  //TODO to get X
  return 1.0;
}

int8_t MapNode::getProbability() {
  //TODO to get probability
  return 1;
}

void MapNode::setX(float value) {
  //TODO to set X
}

void MapNode::setY(float value) {
  //TODO to get y
}

void MapNode::setProbability(int8_t value) {
  //TODO to set probability
}

bool MapNode::getisFrontier() {
  //TODO to get status of frontier
  return true;
}

void MapNode::setisFrontier(bool value) {
  //TODO to set status of frontier
}

int MapNode::getFrontierIndex() {
  //TODO to get frontier index
  return 1;
}

void MapNode::setFrontierIndex(int value) {
  //TODO to set frontier index
}
