<?php
/**
 * @file
 * Defines fields for the ting entities and formatters for the fields.
 */

/**
 * Implements hook_field_info().
 */
function ting_material_details_field_info() {
  $ret = array(
    // Defines dc:type.
    'ting_details_type' => array(
      'label' => t('Material type'),
      'description' => t('Material type'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dc:format.
    'ting_details_format' => array(
      'label' => t('Material format'),
      'description' => t('Material format'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dcterms:isPartOf (Availability).
    'ting_details_ispartof' => array(
      'label' => t('Material available in'),
      'description' => t('Material available in'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_is_part_of_search',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dc:language.
    'ting_details_language' => array(
      'label' => t('Material language'),
      'description' => t('Material language'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dkdcplus:spoken.
    'ting_details_spoken' => array(
      'label' => t('Material spoken language'),
      'description' => t('Material spoken language'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dkdcplus:subtitles.
    'ting_details_subtitles' => array(
      'label' => t('Material subtitles'),
      'description' => t('Material subtitles'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dkdcplus:genre.
    'ting_details_genre' => array(
      'label' => t('Material genre'),
      'description' => t('Material genre'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dc:subjects.
    'ting_details_subjects' => array(
      'label' => t('Material subject'),
      'description' => t('Material subject'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_subject_search',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines classification (dc:subject->dkdcplus:DK5).
    'ting_details_classification' => array(
      'label' => t('Material classification'),
      'description' => t('Material classification'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dcterms:spatial (geo encoding).
    'ting_details_spatial' => array(
      'label' => t('Material spatial'),
      'description' => t('Material spatial'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dc:contributor.
    'ting_details_contributor' => array(
      'label' => t('Material contributor'),
      'description' => t('Material contributor'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_creator_search',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dkdcplus:mus (musician).
    'ting_details_musician' => array(
      'label' => t('Material musician'),
      'description' => t('Material musician'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dkdcplus:track.
    'ting_details_tracks' => array(
      'label' => t('Material tracks'),
      'description' => t('Material tracks'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dcterms:isReferencedBy.
    'ting_details_referenced' => array(
      'label' => t('Material referenced by'),
      'description' => t('Material referenced by'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dc:description.
    'ting_details_description' => array(
      'label' => t('Material description'),
      'description' => t('Material description'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dc:description (dkdcplus:series).
    'ting_details_seriesdescription' => array(
      'label' => t('Material series description'),
      'description' => t('Material series description'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_seriesdescription_search',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dc:source (original title).
    'ting_details_source' => array(
      'label' => t('Material original title'),
      'description' => t('Material original title'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dcterms:replaces.
    'ting_details_replaces' => array(
      'label' => t('Material previous title'),
      'description' => t('Material previous title'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dcterms:isReplacedBy.
    'ting_details_replaced_by' => array(
      'label' => t('Material later title'),
      'description' => t('Material later title'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dkdcplus:ISBN.
    'ting_details_isbn' => array(
      'label' => t('Material ISBN no.'),
      'description' => t('Material ISBN no.'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dcterms:URI.
    'ting_details_uri' => array(
      'label' => t('Material URI'),
      'description' => t('Material URI'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dkdcplus:version.
    'ting_details_version' => array(
      'label' => t('Material version'),
      'description' => t('Material version'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dcterms:extent.
    'ting_details_extent' => array(
      'label' => t('Material extent'),
      'description' => t('Material extent'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dc:publisher.
    'ting_details_publisher' => array(
      'label' => t('Material publisher'),
      'description' => t('Material publisher'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dc:rights.
    'ting_details_rights' => array(
      'label' => t('Material rights'),
      'description' => t('Material rights'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dcterms:audience.
    'ting_details_audience' => array(
      'label' => t('Material audience'),
      'description' => t('Material audience'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dkdcplus:age.
    'ting_details_age' => array(
      'label' => t('Material age'),
      'description' => t('Material age'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
    // Defines dkdcplus:pegi.
    'ting_details_pegi' => array(
      'label' => t('Material PEGI-mark'),
      'description' => t('Material PEGI-mark'),
      'default_widget' => 'hidden',
      'default_formatter' => 'ting_details_single',
      'virtual_field' => array(
        'entity_types' => array('ting_object'),
        'add_widget' => TRUE,
      ),
    ),
  );

  return $ret;
}

/**
 * Implements hook_field_formatter_info().
 *
 * Notes; 'field types' are passed on to hook_field_formatter_view
 */
function ting_material_details_field_formatter_info() {
  return array(
    'ting_details_single' => array(
      'label' => t('Default'),
      'field types' => array(
        'ting_details_type',
        'ting_details_format',
        'ting_details_ispartof',
        'ting_details_language',
        'ting_details_spoken',
        'ting_details_subtitles',
        'ting_details_classification',
        'ting_details_spatial',
        'ting_details_musician',
        'ting_details_referenced',
        'ting_details_description',
        'ting_details_source',
        'ting_details_replaces',
        'ting_details_replaced_by',
        'ting_details_isbn',
        'ting_details_uri',
        'ting_details_version',
        'ting_details_extent',
        'ting_details_publisher',
        'ting_details_rights',
        'ting_details_age',
        'ting_details_audience',
        'ting_details_subjects',
        'ting_details_tracks',
        'ting_details_genre',
        'ting_details_contributor',
        'ting_details_pegi',
      ),
    ),

    'ting_details_creator_search' => array(
      'label' => t('Creator search link'),
      'field types' => array(
        'ting_details_contributor',
      ),
    ),

    'ting_details_subject_search' => array(
      'label' => t('Subject search link'),
      'field types' => array(
        'ting_details_subjects',
      ),
    ),

    'ting_details_seriesdescription_search' => array(
      'label' => t('Series search link'),
      'field types' => array(
        'ting_details_seriesdescription',
      ),
    ),

    'ting_details_is_part_of_search' => array(
      'label' => t('Part of manifestation search link'),
      'field types' => array(
        'ting_details_ispartof',
      ),
    ),

    'ting_details_generic_search' => array(
      'label' => t('Search link'),
      'field types' => array(
        'ting_details_age',
        'ting_details_audience',
        'ting_details_classification',
        'ting_details_contributor',
        'ting_details_contributor',
        'ting_details_description',
        'ting_details_extent',
        'ting_details_format',
        'ting_details_genre',
        'ting_details_isbn',
        'ting_details_ispartof',
        'ting_details_language',
        'ting_details_musician',
        'ting_details_pegi',
        'ting_details_publisher',
        'ting_details_referenced',
        'ting_details_replaced_by',
        'ting_details_replaces',
        'ting_details_rights',
        'ting_details_seriesdescription',
        'ting_details_source',
        'ting_details_spatial',
        'ting_details_spoken',
        'ting_details_subjects',
        'ting_details_subjects',
        'ting_details_subtitles',
        'ting_details_tracks',
        'ting_details_type',
        'ting_details_version',
      ),
      'settings' => array(
        'index' => 'term.default',
      ),
    ),
  );
}

/**
 * Implements hook_field_formatter_settings_form().
 */
function ting_material_details_field_formatter_settings_form($field, $instance, $view_mode, $form, $form_state) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];
  $element = NULL;

  if ($display['type'] == 'ting_details_generic_search') {
    $element['index'] = array(
      '#title' => t('Search index'),
      '#type' => 'textfield',
      '#size' => 20,
      '#default_value' => $settings['index'],
      '#required' => TRUE,
      '#description' => t('OpenSearch index to search in.'),
    );
  }

  return $element;
}

/**
 * Implements hook_field_formatter_settings_summary().
 */
function ting_material_details_field_formatter_settings_summary($field, $instance, $view_mode) {
  $display = $instance['display'][$view_mode];
  $settings = $display['settings'];
  $summary = '';
  if ($display['type'] == 'ting_details_generic_search') {
    $summary = t('Linked to search in @index index.', array('@index' => $settings['index']));
  }

  return $summary;
}

/**
 * Retrieves a virtual field value from the Ting object embedded in the entity.
 *
 * @param string $field_name
 *   The name of the field we want to retrieve data for.
 * @param \TingEntity $entity
 *   A TingEntity with a TingObjectInterface instance embedded.
 *
 * @return mixed|FALSE
 *   The virtual field value, or FALSE if it can not be determined.
 */
function ting_material_details_get_object_property($field_name, TingEntity $entity) {
  if (NULL === $entity->getTingObject()) {
    return FALSE;
  }
  // Switch on the name and get the value from either a property on the entity
  // or the embedded Ting object.
  switch ($field_name) {
    case 'ting_details_type':
      $translated_type = t($entity->type, array(), array(
        'context' => 'material_type',
      ));
      return $translated_type;

    case 'ting_details_language':
      return $entity->language;

    case 'ting_details_subjects':
      return $entity->subjects;

    case 'ting_details_classification':
      return $entity->getClassification();

    case 'ting_details_contributor':
      // The plural is not a typo.
      return $entity->contributors;

    case 'ting_details_format':
      return $entity->getTingObject()->getFormat();

    case 'ting_details_ispartof':
      return $entity->getTingObject()->isPartOf();

    case 'ting_details_spoken':
      return $entity->getTingObject()->getSpoken();

    case 'ting_details_subtitles':
      return $entity->getTingObject()->getSubTitles();

    case 'ting_details_genre':
      return $entity->getTingObject()->getGenre();

    case 'ting_details_spatial':
      return $entity->getTingObject()->getSpatial();

    case 'ting_details_musician':
      return $entity->getTingObject()->getMusician();

    case 'ting_details_tracks':
      return $entity->getTingObject()->getTracks();

    case 'ting_details_referenced':
      return $entity->getTingObject()->getReferenced();

    case 'ting_details_seriesdescription':
      return $entity->getTingObject()->getSeriesDescription();

    case 'ting_details_description':
      return $entity->getTingObject()->getDescription();

    case 'ting_details_source':
      return $entity->getTingObject()->getSource();

    case 'ting_details_replaces':
      return $entity->getTingObject()->getReplaces();

    case 'ting_details_replaced_by':
      return $entity->getTingObject()->getReplacedBy();

    case 'ting_details_isbn':
      return $entity->getTingObject()->getIsbn();

    case 'ting_details_uri':
      return $entity->getTingObject()->getURI();

    case 'ting_details_version':
      return $entity->getTingObject()->getVersion();

    case 'ting_details_extent':
      return $entity->getTingObject()->getExtent();

    case 'ting_details_publisher':
      return $entity->getTingObject()->getPublisher();

    case 'ting_details_rights':
      return $entity->getTingObject()->getRights();

    case 'ting_details_age':
      return $entity->getTingObject()->getAge();

    case 'ting_details_audience':
      return $entity->getTingObject()->getAudience();

    case 'ting_details_pegi':
      return $entity->getTingObject()->getPegi();
  }

  // In case we can't match the field, default to FALSE.
  return FALSE;
}

/**
 * Implements hook_field_formatter_view().
 */
function ting_material_details_field_formatter_view($entity_type, $entity, $field, $instance, $langcode, $items, $display) {
  $element = array();
  foreach (array_keys($items) as $delta) {
    // Attempt to match virtual field.
    if ($val = ting_material_details_get_object_property($field['type'], $entity)) {
      switch ($display['type']) {
        case 'ting_details_single':
          $details = '';
          if (is_array($val)) {
            foreach ($val as $detail) {
              $details .= '<span class="ting-material-detail">' . $detail . '</span>';
            }
          }
          else {
            $details = $val;
          }
          $element[$delta] = array(
            '#markup' => $details,
          );
          break;

        case 'ting_details_creator_search':
          if (!is_array($val)) {
            $val = array($val);
          }
          $links = array();
          foreach ($val as $value) {
            $links[] = l($value, 'search/ting/phrase.creator="' . $value . '"');
          }
          $element[$delta] = array(
            '#markup' => implode(', ', $links),
          );
          break;

        case 'ting_details_subject_search':
          if (!is_array($val)) {
            $val = array($val);
          }
          $links = array();
          foreach ($val as $value) {
            $links[] = l($value, 'search/ting/phrase.subject=' . $value);
          }
          $element[$delta] = array(
            '#markup' => implode(', ', $links),
          );
          break;

        case 'ting_details_seriesdescription_search':
          $element[$delta] = array(
            '#markup' => $entity->serieDescription,
          );
          break;

        // Run through all isPartOfManifestion elements of entity.
        // If the entity has a relation-uri; create a render array that
        // renders a link to the relation.
        // If not: use the text desribing the relation.
        //
        // NOTICE : Opensearch delivers one or MORE relation-uris; This
        // formatter only handles one.
        // @see #bug1109. (http://platform.dandigbib.org/issues/1109)
        case 'ting_details_is_part_of_search':
          $type = $uri = NULL;
          foreach ($entity->getRelations() as $relation) {
            $type = explode(':', $relation->getType());
            // $relation have a namespace: dbcbib:isPartOfManifestation
            if (isset($type[1]) && $type[1] == 'dbcbib:isPartOfManifestation') {
              $uri = $relation->getURI();
            }
          }
          $render['#prefix'] = '<span class="ting-material-detail ting-material-is-part-of">';
          $render['#suffix'] = '</span>';
          if (!is_array($val)) {
            $val = array($val);
          }
          if ($uri) {
            foreach ($val as $key => $detail) {
              $render['part_of'][$key]['#theme'] = 'link';
              $render['part_of'][$key]['#text'] = $detail;
              $render['part_of'][$key]['#path'] = 'search/ting/' . $uri;
              $render['part_of'][$key]['#options']['attributes'] = array();
              $render['part_of'][$key]['#options']['html'] = 1;
            }
          }
          else {
            foreach ($val as $key => $detail) {
              $render['part_of'][$key]['#markup'] = $detail;
            }
          }
          // for now, we only use the first item.
          $element[$delta]['part_of'] = reset($render['part_of']);
          break;

        case 'ting_details_generic_search':
          if (!is_array($val)) {
            $val = array($val);
          }
          $links = array();
          foreach ($val as $value) {
            $links[] = l($value, 'search/ting/' . $display['settings']['index'] . '=' . _ting_material_details_quote($value));
          }
          $element[$delta] = array(
            '#markup' => implode(', ', $links),
          );
          break;
      }
    }
  }
  return $element;
}

/**
 * Quote a string for index search, if it contains anything exotic.
 */
function _ting_material_details_quote($string) {
  if (preg_match('/(\s+|"|=|\b(and|or|not|prox)\b)/', $string)) {
    $string = '"' . strtr($string, array('"' => '\\"')) . '"';
  }
  return $string;
}

/**
 * Implements hook_field_is_empty().
 *
 * @todo check
 */
function ting_material_details_is_empty($item, $field) {
  return FALSE;
}

/**
 * Implements hook_field_load().
 *
 * Notes: Define custom load behavior for this module's field types.
 */
function ting_material_details_field_load($entity_type, $entities, $field, $instances, $langcode, &$items, $age) {
  foreach ($entities as $id => $entity) {
    $items[$id][0] = array(
      'id' => $id,
    );
  }
}

/**
 * Implements hook_field_formatter_prepare_view().
 *
 * we could also use hook_field_load or hook_field_prepare_view
 */
function ting_material_details_field_formatter_prepare_view($entity_type, $entities, $field, $instances, $langcode, &$items, $displays) {
  foreach ($entities as $id => $entity) {
    $items[$id][0] = array(
      'id' => $id,
    );
  }
}
