<?php

function crud_data_select_db(){
    global $user;
    $user_id = $user->uid;
    $query = db_select('my_friends', 'fr')
        ->fields('fr', array('uid', 'fr_name'))
        ->condition('uid', 1, '=');
    // $query -> execute();
    $result = $query->execute()->fetchAll();
    foreach ($result as $frnd) {
        krumo($frnd);
        print_r($frnd);
        $content = array();
        $content['renderable_element'] = array(
            '#theme' => 'item_list',
            '#items' => t($frnd),
        );
    }
    return $content['renderable_element'];
}