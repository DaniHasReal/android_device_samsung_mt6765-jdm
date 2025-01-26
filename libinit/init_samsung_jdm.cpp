/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_variant.h>
#include <libinit_utils.h>
#include <unistd.h>

#include "vendor_init.h"

static const variant_info_t a055m_info = {
    .hwc_value = "",
    .sku_value = "a05m",

    .brand = "Samsung",
    .device = "a05m",
    .marketname = "Samsung Galaxy A05",
    .model = "SM-A055M",
    .build_fingerprint = "samsung/a05mxx/a05m:12/SP1A.210812.016/A055MUBS6CXI3:user/release-keys"
};

static const variant_info_t a055f_info = {
    .hwc_value = "",
    .sku_value = "a05m",

    .brand = "Samsung",
    .device = "a05m",
    .marketname = "Samsung Galaxy A05",
    .model = "SM-A055F",
    .build_fingerprint = "samsung/a05mxx/a05m:12/SP1A.210812.016/A055FXXS6CXI2:user/release-keys"
};

static const variant_info_t m055f_info = {
    .hwc_value = "",
    .sku_value = "a05m",

    .brand = "Samsung",
    .device = "a05m",
    .marketname = "Samsung Galaxy M05",
    .model = "SM-M055F",
    .build_fingerprint = "samsung/a05mjxx/a05m:12/SP1A.210812.016/M055FXXS2AXJ1:user/release-keys"
};

static const variant_info_t e055f_info = {
    .hwc_value = "",
    .sku_value = "a05m",

    .brand = "Samsung",
    .device = "a05m",
    .marketname = "Samsung Galaxy F05",
    .model = "SM-F055F",
    .build_fingerprint = "samsung/a05mdxx/a05m:12/SP1A.210812.016/E055FXXU2AXJ2:user/release-keys"
};


static const variant_info_t a065f_info = {
    .hwc_value = "",
    .sku_value = "a06",

    .brand = "Samsung",
    .device = "a06",
    .marketname = "Samsung Galaxy A06",
    .model = "SM-A065F",
    .build_fingerprint = "samsung/a06xx/a06:12/SP1A.210812.016/A065FXXS2AXJ2:user/release-keys"
};

static const variant_info_t a065m_info = {
    .hwc_value = "",
    .sku_value = "a06",

    .brand = "Samsung",
    .device = "a06",
    .marketname = "Samsung Galaxy A06",
    .model = "SM-A065M",
    .build_fingerprint = "samsung/a06xx/a06:12/SP1A.210812.016/A065MUBS3AXL2:user/release-keys"
};


static const std::vector<variant_info_t> variants = {
    a055f_info,
    a055m_info,
    a065m_info,
    e055f_info,
    m055f_info,
};

void vendor_load_properties() {
    if (access("/system/bin/recovery", F_OK) != 0) {
        search_variant(variants);
    }
}
