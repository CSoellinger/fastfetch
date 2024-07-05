/* Generated by wayland-scanner 1.22.0 */

#ifndef KDE_OUTPUT_DEVICE_V2_CLIENT_PROTOCOL_H
#define KDE_OUTPUT_DEVICE_V2_CLIENT_PROTOCOL_H

#include <stdint.h>
#include <stddef.h>
#include <wayland-util.h>

#ifdef  __cplusplus
extern "C" {
#endif

/**
 * @page page_kde_output_device_v2 The kde_output_device_v2 protocol
 * @section page_ifaces_kde_output_device_v2 Interfaces
 * - @subpage page_iface_kde_output_device_v2 - output configuration representation
 * - @subpage page_iface_kde_output_device_mode_v2 - output mode
 * @section page_copyright_kde_output_device_v2 Copyright
 * <pre>
 *
 * SPDX-FileCopyrightText: 2008-2011 Kristian Høgsberg
 * SPDX-FileCopyrightText: 2010-2011 Intel Corporation
 * SPDX-FileCopyrightText: 2012-2013 Collabora, Ltd.
 * SPDX-FileCopyrightText: 2015 Sebastian Kügler <sebas@kde.org>
 * SPDX-FileCopyrightText: 2021 Méven Car <meven.car@enioka.com>
 *
 * SPDX-License-Identifier: MIT-CMU
 * </pre>
 */
struct kde_output_device_mode_v2;
struct kde_output_device_v2;

#ifndef KDE_OUTPUT_DEVICE_V2_INTERFACE
#define KDE_OUTPUT_DEVICE_V2_INTERFACE
/**
 * @page page_iface_kde_output_device_v2 kde_output_device_v2
 * @section page_iface_kde_output_device_v2_desc Description
 *
 * An output device describes a display device available to the compositor.
 * output_device is similar to wl_output, but focuses on output
 * configuration management.
 *
 * A client can query all global output_device objects to enlist all
 * available display devices, even those that may currently not be
 * represented by the compositor as a wl_output.
 *
 * The client sends configuration changes to the server through the
 * outputconfiguration interface, and the server applies the configuration
 * changes to the hardware and signals changes to the output devices
 * accordingly.
 *
 * This object is published as global during start up for every available
 * display devices, or when one later becomes available, for example by
 * being hotplugged via a physical connector.
 * @section page_iface_kde_output_device_v2_api API
 * See @ref iface_kde_output_device_v2.
 */
/**
 * @defgroup iface_kde_output_device_v2 The kde_output_device_v2 interface
 *
 * An output device describes a display device available to the compositor.
 * output_device is similar to wl_output, but focuses on output
 * configuration management.
 *
 * A client can query all global output_device objects to enlist all
 * available display devices, even those that may currently not be
 * represented by the compositor as a wl_output.
 *
 * The client sends configuration changes to the server through the
 * outputconfiguration interface, and the server applies the configuration
 * changes to the hardware and signals changes to the output devices
 * accordingly.
 *
 * This object is published as global during start up for every available
 * display devices, or when one later becomes available, for example by
 * being hotplugged via a physical connector.
 */
extern const struct wl_interface kde_output_device_v2_interface;
#endif
#ifndef KDE_OUTPUT_DEVICE_MODE_V2_INTERFACE
#define KDE_OUTPUT_DEVICE_MODE_V2_INTERFACE
/**
 * @page page_iface_kde_output_device_mode_v2 kde_output_device_mode_v2
 * @section page_iface_kde_output_device_mode_v2_desc Description
 *
 * This object describes an output mode.
 *
 * Some heads don't support output modes, in which case modes won't be
 * advertised.
 *
 * Properties sent via this interface are applied atomically via the
 * kde_output_device.done event. No guarantees are made regarding the order
 * in which properties are sent.
 * @section page_iface_kde_output_device_mode_v2_api API
 * See @ref iface_kde_output_device_mode_v2.
 */
/**
 * @defgroup iface_kde_output_device_mode_v2 The kde_output_device_mode_v2 interface
 *
 * This object describes an output mode.
 *
 * Some heads don't support output modes, in which case modes won't be
 * advertised.
 *
 * Properties sent via this interface are applied atomically via the
 * kde_output_device.done event. No guarantees are made regarding the order
 * in which properties are sent.
 */
extern const struct wl_interface kde_output_device_mode_v2_interface;
#endif

#ifndef KDE_OUTPUT_DEVICE_V2_SUBPIXEL_ENUM
#define KDE_OUTPUT_DEVICE_V2_SUBPIXEL_ENUM
/**
 * @ingroup iface_kde_output_device_v2
 * subpixel geometry information
 *
 * This enumeration describes how the physical pixels on an output are
 * laid out.
 */
enum kde_output_device_v2_subpixel {
	KDE_OUTPUT_DEVICE_V2_SUBPIXEL_UNKNOWN = 0,
	KDE_OUTPUT_DEVICE_V2_SUBPIXEL_NONE = 1,
	KDE_OUTPUT_DEVICE_V2_SUBPIXEL_HORIZONTAL_RGB = 2,
	KDE_OUTPUT_DEVICE_V2_SUBPIXEL_HORIZONTAL_BGR = 3,
	KDE_OUTPUT_DEVICE_V2_SUBPIXEL_VERTICAL_RGB = 4,
	KDE_OUTPUT_DEVICE_V2_SUBPIXEL_VERTICAL_BGR = 5,
};
#endif /* KDE_OUTPUT_DEVICE_V2_SUBPIXEL_ENUM */

#ifndef KDE_OUTPUT_DEVICE_V2_TRANSFORM_ENUM
#define KDE_OUTPUT_DEVICE_V2_TRANSFORM_ENUM
/**
 * @ingroup iface_kde_output_device_v2
 * transform from framebuffer to output
 *
 * This describes the transform, that a compositor will apply to a
 * surface to compensate for the rotation or mirroring of an
 * output device.
 *
 * The flipped values correspond to an initial flip around a
 * vertical axis followed by rotation.
 *
 * The purpose is mainly to allow clients to render accordingly and
 * tell the compositor, so that for fullscreen surfaces, the
 * compositor is still able to scan out directly client surfaces.
 */
enum kde_output_device_v2_transform {
	KDE_OUTPUT_DEVICE_V2_TRANSFORM_NORMAL = 0,
	KDE_OUTPUT_DEVICE_V2_TRANSFORM_90 = 1,
	KDE_OUTPUT_DEVICE_V2_TRANSFORM_180 = 2,
	KDE_OUTPUT_DEVICE_V2_TRANSFORM_270 = 3,
	KDE_OUTPUT_DEVICE_V2_TRANSFORM_FLIPPED = 4,
	KDE_OUTPUT_DEVICE_V2_TRANSFORM_FLIPPED_90 = 5,
	KDE_OUTPUT_DEVICE_V2_TRANSFORM_FLIPPED_180 = 6,
	KDE_OUTPUT_DEVICE_V2_TRANSFORM_FLIPPED_270 = 7,
};
#endif /* KDE_OUTPUT_DEVICE_V2_TRANSFORM_ENUM */

#ifndef KDE_OUTPUT_DEVICE_V2_CAPABILITY_ENUM
#define KDE_OUTPUT_DEVICE_V2_CAPABILITY_ENUM
/**
 * @ingroup iface_kde_output_device_v2
 * describes capabilities of the outputdevice
 *
 * Describes what capabilities this device has.
 */
enum kde_output_device_v2_capability {
	/**
	 * if this output_device can use overscan
	 */
	KDE_OUTPUT_DEVICE_V2_CAPABILITY_OVERSCAN = 0x1,
	/**
	 * if this outputdevice supports variable refresh rate
	 */
	KDE_OUTPUT_DEVICE_V2_CAPABILITY_VRR = 0x2,
	/**
	 * if setting the rgb range is possible
	 */
	KDE_OUTPUT_DEVICE_V2_CAPABILITY_RGB_RANGE = 0x4,
	/**
	 * if this outputdevice supports high dynamic range
	 * @since 3
	 */
	KDE_OUTPUT_DEVICE_V2_CAPABILITY_HIGH_DYNAMIC_RANGE = 0x8,
	/**
	 * if this outputdevice supports a wide color gamut
	 * @since 3
	 */
	KDE_OUTPUT_DEVICE_V2_CAPABILITY_WIDE_COLOR_GAMUT = 0x10,
	/**
	 * if this outputdevice supports autorotation
	 * @since 4
	 */
	KDE_OUTPUT_DEVICE_V2_CAPABILITY_AUTO_ROTATE = 0x20,
	/**
	 * if this outputdevice supports icc profiles
	 * @since 5
	 */
	KDE_OUTPUT_DEVICE_V2_CAPABILITY_ICC_PROFILE = 0x40,
};
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_CAPABILITY_HIGH_DYNAMIC_RANGE_SINCE_VERSION 3
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_CAPABILITY_WIDE_COLOR_GAMUT_SINCE_VERSION 3
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_CAPABILITY_AUTO_ROTATE_SINCE_VERSION 4
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_CAPABILITY_ICC_PROFILE_SINCE_VERSION 5
#endif /* KDE_OUTPUT_DEVICE_V2_CAPABILITY_ENUM */

#ifndef KDE_OUTPUT_DEVICE_V2_VRR_POLICY_ENUM
#define KDE_OUTPUT_DEVICE_V2_VRR_POLICY_ENUM
/**
 * @ingroup iface_kde_output_device_v2
 * describes vrr policy
 *
 * Describes when the compositor may employ variable refresh rate
 */
enum kde_output_device_v2_vrr_policy {
	KDE_OUTPUT_DEVICE_V2_VRR_POLICY_NEVER = 0,
	KDE_OUTPUT_DEVICE_V2_VRR_POLICY_ALWAYS = 1,
	KDE_OUTPUT_DEVICE_V2_VRR_POLICY_AUTOMATIC = 2,
};
#endif /* KDE_OUTPUT_DEVICE_V2_VRR_POLICY_ENUM */

#ifndef KDE_OUTPUT_DEVICE_V2_RGB_RANGE_ENUM
#define KDE_OUTPUT_DEVICE_V2_RGB_RANGE_ENUM
/**
 * @ingroup iface_kde_output_device_v2
 * describes RGB range policy
 *
 * Whether full or limited color range should be used
 */
enum kde_output_device_v2_rgb_range {
	KDE_OUTPUT_DEVICE_V2_RGB_RANGE_AUTOMATIC = 0,
	KDE_OUTPUT_DEVICE_V2_RGB_RANGE_FULL = 1,
	KDE_OUTPUT_DEVICE_V2_RGB_RANGE_LIMITED = 2,
};
#endif /* KDE_OUTPUT_DEVICE_V2_RGB_RANGE_ENUM */

#ifndef KDE_OUTPUT_DEVICE_V2_AUTO_ROTATE_POLICY_ENUM
#define KDE_OUTPUT_DEVICE_V2_AUTO_ROTATE_POLICY_ENUM
/**
 * @ingroup iface_kde_output_device_v2
 * describes when auto rotate should be used
 */
enum kde_output_device_v2_auto_rotate_policy {
	KDE_OUTPUT_DEVICE_V2_AUTO_ROTATE_POLICY_NEVER = 0,
	KDE_OUTPUT_DEVICE_V2_AUTO_ROTATE_POLICY_IN_TABLET_MODE = 1,
	KDE_OUTPUT_DEVICE_V2_AUTO_ROTATE_POLICY_ALWAYS = 2,
};
#endif /* KDE_OUTPUT_DEVICE_V2_AUTO_ROTATE_POLICY_ENUM */

#ifndef KDE_OUTPUT_DEVICE_V2_COLOR_PROFILE_SOURCE_ENUM
#define KDE_OUTPUT_DEVICE_V2_COLOR_PROFILE_SOURCE_ENUM
/**
 * @ingroup iface_kde_output_device_v2
 * which source the compositor should use for the color profile on an output
 */
enum kde_output_device_v2_color_profile_source {
	KDE_OUTPUT_DEVICE_V2_COLOR_PROFILE_SOURCE_SRGB = 0,
	KDE_OUTPUT_DEVICE_V2_COLOR_PROFILE_SOURCE_ICC = 1,
	KDE_OUTPUT_DEVICE_V2_COLOR_PROFILE_SOURCE_EDID = 2,
};
#endif /* KDE_OUTPUT_DEVICE_V2_COLOR_PROFILE_SOURCE_ENUM */

/**
 * @ingroup iface_kde_output_device_v2
 * @struct kde_output_device_v2_listener
 */
struct kde_output_device_v2_listener {
	/**
	 * geometric properties of the output
	 *
	 * The geometry event describes geometric properties of the
	 * output. The event is sent when binding to the output object and
	 * whenever any of the properties change.
	 * @param x x position within the global compositor space
	 * @param y y position within the global compositor space
	 * @param physical_width width in millimeters of the output
	 * @param physical_height height in millimeters of the output
	 * @param subpixel subpixel orientation of the output
	 * @param make textual description of the manufacturer
	 * @param model textual description of the model
	 * @param transform transform that maps framebuffer to output
	 */
	void (*geometry)(void *data,
			 struct kde_output_device_v2 *kde_output_device_v2,
			 int32_t x,
			 int32_t y,
			 int32_t physical_width,
			 int32_t physical_height,
			 int32_t subpixel,
			 const char *make,
			 const char *model,
			 int32_t transform);
	/**
	 * current mode
	 *
	 * This event describes the mode currently in use for this head.
	 * It is only sent if the output is enabled.
	 */
	void (*current_mode)(void *data,
			     struct kde_output_device_v2 *kde_output_device_v2,
			     struct kde_output_device_mode_v2 *mode);
	/**
	 * advertise available output modes and current one
	 *
	 * The mode event describes an available mode for the output.
	 *
	 * When the client binds to the output_device object, the server
	 * sends this event once for every available mode the output_device
	 * can be operated by.
	 *
	 * There will always be at least one event sent out on initial
	 * binding, which represents the current mode.
	 *
	 * Later if an output changes, its mode event is sent again for the
	 * eventual added modes and lastly the current mode. In other
	 * words, the current mode is always represented by the latest
	 * event sent with the current flag set.
	 *
	 * The size of a mode is given in physical hardware units of the
	 * output device. This is not necessarily the same as the output
	 * size in the global compositor space. For instance, the output
	 * may be scaled, as described in kde_output_device_v2.scale, or
	 * transformed, as described in kde_output_device_v2.transform.
	 */
	void (*mode)(void *data,
		     struct kde_output_device_v2 *kde_output_device_v2,
		     struct kde_output_device_mode_v2 *mode);
	/**
	 * sent all information about output
	 *
	 * This event is sent after all other properties have been sent
	 * on binding to the output object as well as after any other
	 * output property change have been applied later on. This allows
	 * to see changes to the output properties as atomic, even if
	 * multiple events successively announce them.
	 */
	void (*done)(void *data,
		     struct kde_output_device_v2 *kde_output_device_v2);
	/**
	 * output scaling properties
	 *
	 * This event contains scaling geometry information that is not
	 * in the geometry event. It may be sent after binding the output
	 * object or if the output scale changes later. If it is not sent,
	 * the client should assume a scale of 1.
	 *
	 * A scale larger than 1 means that the compositor will
	 * automatically scale surface buffers by this amount when
	 * rendering. This is used for high resolution displays where
	 * applications rendering at the native resolution would be too
	 * small to be legible.
	 *
	 * It is intended that scaling aware clients track the current
	 * output of a surface, and if it is on a scaled output it should
	 * use wl_surface.set_buffer_scale with the scale of the output.
	 * That way the compositor can avoid scaling the surface, and the
	 * client can supply a higher detail image.
	 * @param factor scaling factor of output
	 */
	void (*scale)(void *data,
		      struct kde_output_device_v2 *kde_output_device_v2,
		      wl_fixed_t factor);
	/**
	 * advertise EDID data for the output
	 *
	 * The edid event encapsulates the EDID data for the
	 * outputdevice.
	 *
	 * The event is sent when binding to the output object. The EDID
	 * data may be empty, in which case this event is sent anyway. If
	 * the EDID information is empty, you can fall back to the name et
	 * al. properties of the outputdevice.
	 * @param raw base64-encoded EDID string
	 */
	void (*edid)(void *data,
		     struct kde_output_device_v2 *kde_output_device_v2,
		     const char *raw);
	/**
	 * output is enabled or disabled
	 *
	 * The enabled event notifies whether this output is currently
	 * enabled and used for displaying content by the server. The event
	 * is sent when binding to the output object and whenever later on
	 * an output changes its state by becoming enabled or disabled.
	 * @param enabled output enabled state
	 */
	void (*enabled)(void *data,
			struct kde_output_device_v2 *kde_output_device_v2,
			int32_t enabled);
	/**
	 * A unique id for this outputdevice
	 *
	 * The uuid can be used to identify the output. It's controlled
	 * by the server entirely. The server should make sure the uuid is
	 * persistent across restarts. An empty uuid is considered invalid.
	 * @param uuid output devices ID
	 */
	void (*uuid)(void *data,
		     struct kde_output_device_v2 *kde_output_device_v2,
		     const char *uuid);
	/**
	 * Serial Number
	 *
	 * Serial ID of the monitor, sent on startup before the first
	 * done event.
	 * @param serialNumber textual representation of serial number
	 */
	void (*serial_number)(void *data,
			      struct kde_output_device_v2 *kde_output_device_v2,
			      const char *serialNumber);
	/**
	 * EISA ID
	 *
	 * EISA ID of the monitor, sent on startup before the first done
	 * event.
	 * @param eisaId textual representation of EISA identifier
	 */
	void (*eisa_id)(void *data,
			struct kde_output_device_v2 *kde_output_device_v2,
			const char *eisaId);
	/**
	 * capability flags
	 *
	 * What capabilities this device has, sent on startup before the
	 * first done event.
	 */
	void (*capabilities)(void *data,
			     struct kde_output_device_v2 *kde_output_device_v2,
			     uint32_t flags);
	/**
	 * overscan
	 *
	 * Overscan value of the monitor in percent, sent on startup
	 * before the first done event.
	 * @param overscan amount of overscan of the monitor
	 */
	void (*overscan)(void *data,
			 struct kde_output_device_v2 *kde_output_device_v2,
			 uint32_t overscan);
	/**
	 * Variable Refresh Rate Policy
	 *
	 * What policy the compositor will employ regarding its use of
	 * variable refresh rate.
	 */
	void (*vrr_policy)(void *data,
			   struct kde_output_device_v2 *kde_output_device_v2,
			   uint32_t vrr_policy);
	/**
	 * RGB range
	 *
	 * What rgb range the compositor is using for this output
	 */
	void (*rgb_range)(void *data,
			  struct kde_output_device_v2 *kde_output_device_v2,
			  uint32_t rgb_range);
	/**
	 * Output's name
	 *
	 * Name of the output, it's useful to cross-reference to an
	 * zxdg_output_v1 and ultimately QScreen
	 * @since 2
	 */
	void (*name)(void *data,
		     struct kde_output_device_v2 *kde_output_device_v2,
		     const char *name);
	/**
	 * if HDR is enabled
	 *
	 * Whether or not high dynamic range is enabled for this output
	 * @param hdr_enabled 1 if enabled, 0 if disabled
	 * @since 3
	 */
	void (*high_dynamic_range)(void *data,
				   struct kde_output_device_v2 *kde_output_device_v2,
				   uint32_t hdr_enabled);
	/**
	 * the brightness of sdr if hdr is enabled
	 *
	 * If high dynamic range is used, this value defines the
	 * brightness in nits for content that's in standard dynamic range
	 * format. Note that while the value is in nits, that doesn't
	 * necessarily translate to the same brightness on the screen.
	 * @since 3
	 */
	void (*sdr_brightness)(void *data,
			       struct kde_output_device_v2 *kde_output_device_v2,
			       uint32_t sdr_brightness);
	/**
	 * if WCG is enabled
	 *
	 * Whether or not the use of a wide color gamut is enabled for
	 * this output
	 * @param wcg_enabled 1 if enabled, 0 if disabled
	 * @since 3
	 */
	void (*wide_color_gamut)(void *data,
				 struct kde_output_device_v2 *kde_output_device_v2,
				 uint32_t wcg_enabled);
	/**
	 * describes when auto rotate is used
	 *
	 *
	 * @since 4
	 */
	void (*auto_rotate_policy)(void *data,
				   struct kde_output_device_v2 *kde_output_device_v2,
				   uint32_t policy);
	/**
	 * describes when auto rotate is used
	 *
	 *
	 * @since 5
	 */
	void (*icc_profile_path)(void *data,
				 struct kde_output_device_v2 *kde_output_device_v2,
				 const char *profile_path);
	/**
	 * metadata about the screen's brightness limits
	 *
	 *
	 * @param max_peak_brightness in nits
	 * @param max_frame_average_brightness in nits
	 * @param min_brightness in 0.0001 nits
	 * @since 6
	 */
	void (*brightness_metadata)(void *data,
				    struct kde_output_device_v2 *kde_output_device_v2,
				    uint32_t max_peak_brightness,
				    uint32_t max_frame_average_brightness,
				    uint32_t min_brightness);
	/**
	 * overrides for the screen's brightness limits
	 *
	 *
	 * @param max_peak_brightness -1 for no override, positive values are the brightness in nits
	 * @param max_average_brightness -1 for no override, positive values are the brightness in nits
	 * @param min_brightness -1 for no override, positive values are the brightness in 0.0001 nits
	 * @since 6
	 */
	void (*brightness_overrides)(void *data,
				     struct kde_output_device_v2 *kde_output_device_v2,
				     int32_t max_peak_brightness,
				     int32_t max_average_brightness,
				     int32_t min_brightness);
	/**
	 * describes which gamut is assumed for sRGB applications
	 *
	 * This can be used to provide the colors users assume sRGB
	 * applications should have based on the default experience on many
	 * modern sRGB screens.
	 * @param gamut_wideness 0 means rec.709 primaries, 10000 means native primaries
	 * @since 6
	 */
	void (*sdr_gamut_wideness)(void *data,
				   struct kde_output_device_v2 *kde_output_device_v2,
				   uint32_t gamut_wideness);
	/**
	 * describes which source the compositor uses for the color profile on an output
	 *
	 *
	 * @since 7
	 */
	void (*color_profile_source)(void *data,
				     struct kde_output_device_v2 *kde_output_device_v2,
				     uint32_t source);
	/**
	 * brightness multiplier
	 *
	 * This is the brightness modifier of the output. It doesn't
	 * specify any absolute values, but is merely a multiplier on top
	 * of other brightness values, like sdr_brightness and
	 * brightness_metadata. 0 is the minimum brightness (not completely
	 * dark) and 10000 is the maximum brightness. This is currently
	 * only supported / meaningful while HDR is active.
	 * @param brightness brightness in 0-10000
	 * @since 8
	 */
	void (*brightness)(void *data,
			   struct kde_output_device_v2 *kde_output_device_v2,
			   uint32_t brightness);
};

/**
 * @ingroup iface_kde_output_device_v2
 */
static inline int
kde_output_device_v2_add_listener(struct kde_output_device_v2 *kde_output_device_v2,
				  const struct kde_output_device_v2_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) kde_output_device_v2,
				     (void (**)(void)) listener, data);
}

/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_GEOMETRY_SINCE_VERSION 1
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_CURRENT_MODE_SINCE_VERSION 1
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_MODE_SINCE_VERSION 1
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_DONE_SINCE_VERSION 1
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_SCALE_SINCE_VERSION 1
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_EDID_SINCE_VERSION 1
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_ENABLED_SINCE_VERSION 1
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_UUID_SINCE_VERSION 1
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_SERIAL_NUMBER_SINCE_VERSION 1
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_EISA_ID_SINCE_VERSION 1
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_CAPABILITIES_SINCE_VERSION 1
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_OVERSCAN_SINCE_VERSION 1
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_VRR_POLICY_SINCE_VERSION 1
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_RGB_RANGE_SINCE_VERSION 1
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_NAME_SINCE_VERSION 2
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_HIGH_DYNAMIC_RANGE_SINCE_VERSION 3
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_SDR_BRIGHTNESS_SINCE_VERSION 3
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_WIDE_COLOR_GAMUT_SINCE_VERSION 3
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_AUTO_ROTATE_POLICY_SINCE_VERSION 4
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_ICC_PROFILE_PATH_SINCE_VERSION 5
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_BRIGHTNESS_METADATA_SINCE_VERSION 6
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_BRIGHTNESS_OVERRIDES_SINCE_VERSION 6
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_SDR_GAMUT_WIDENESS_SINCE_VERSION 6
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_COLOR_PROFILE_SOURCE_SINCE_VERSION 7
/**
 * @ingroup iface_kde_output_device_v2
 */
#define KDE_OUTPUT_DEVICE_V2_BRIGHTNESS_SINCE_VERSION 8


/** @ingroup iface_kde_output_device_v2 */
static inline void
kde_output_device_v2_set_user_data(struct kde_output_device_v2 *kde_output_device_v2, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) kde_output_device_v2, user_data);
}

/** @ingroup iface_kde_output_device_v2 */
static inline void *
kde_output_device_v2_get_user_data(struct kde_output_device_v2 *kde_output_device_v2)
{
	return wl_proxy_get_user_data((struct wl_proxy *) kde_output_device_v2);
}

static inline uint32_t
kde_output_device_v2_get_version(struct kde_output_device_v2 *kde_output_device_v2)
{
	return wl_proxy_get_version((struct wl_proxy *) kde_output_device_v2);
}

/** @ingroup iface_kde_output_device_v2 */
static inline void
kde_output_device_v2_destroy(struct kde_output_device_v2 *kde_output_device_v2)
{
	wl_proxy_destroy((struct wl_proxy *) kde_output_device_v2);
}

/**
 * @ingroup iface_kde_output_device_mode_v2
 * @struct kde_output_device_mode_v2_listener
 */
struct kde_output_device_mode_v2_listener {
	/**
	 * mode size
	 *
	 * This event describes the mode size. The size is given in
	 * physical hardware units of the output device. This is not
	 * necessarily the same as the output size in the global compositor
	 * space. For instance, the output may be scaled or transformed.
	 * @param width width of the mode in hardware units
	 * @param height height of the mode in hardware units
	 */
	void (*size)(void *data,
		     struct kde_output_device_mode_v2 *kde_output_device_mode_v2,
		     int32_t width,
		     int32_t height);
	/**
	 * mode refresh rate
	 *
	 * This event describes the mode's fixed vertical refresh rate.
	 * It is only sent if the mode has a fixed refresh rate.
	 * @param refresh vertical refresh rate in mHz
	 */
	void (*refresh)(void *data,
			struct kde_output_device_mode_v2 *kde_output_device_mode_v2,
			int32_t refresh);
	/**
	 * mode is preferred
	 *
	 * This event advertises this mode as preferred.
	 */
	void (*preferred)(void *data,
			  struct kde_output_device_mode_v2 *kde_output_device_mode_v2);
	/**
	 * the mode has been destroyed
	 *
	 * The compositor will destroy the object immediately after
	 * sending this event, so it will become invalid and the client
	 * should release any resources associated with it.
	 */
	void (*removed)(void *data,
			struct kde_output_device_mode_v2 *kde_output_device_mode_v2);
};

/**
 * @ingroup iface_kde_output_device_mode_v2
 */
static inline int
kde_output_device_mode_v2_add_listener(struct kde_output_device_mode_v2 *kde_output_device_mode_v2,
				       const struct kde_output_device_mode_v2_listener *listener, void *data)
{
	return wl_proxy_add_listener((struct wl_proxy *) kde_output_device_mode_v2,
				     (void (**)(void)) listener, data);
}

/**
 * @ingroup iface_kde_output_device_mode_v2
 */
#define KDE_OUTPUT_DEVICE_MODE_V2_SIZE_SINCE_VERSION 1
/**
 * @ingroup iface_kde_output_device_mode_v2
 */
#define KDE_OUTPUT_DEVICE_MODE_V2_REFRESH_SINCE_VERSION 1
/**
 * @ingroup iface_kde_output_device_mode_v2
 */
#define KDE_OUTPUT_DEVICE_MODE_V2_PREFERRED_SINCE_VERSION 1
/**
 * @ingroup iface_kde_output_device_mode_v2
 */
#define KDE_OUTPUT_DEVICE_MODE_V2_REMOVED_SINCE_VERSION 1


/** @ingroup iface_kde_output_device_mode_v2 */
static inline void
kde_output_device_mode_v2_set_user_data(struct kde_output_device_mode_v2 *kde_output_device_mode_v2, void *user_data)
{
	wl_proxy_set_user_data((struct wl_proxy *) kde_output_device_mode_v2, user_data);
}

/** @ingroup iface_kde_output_device_mode_v2 */
static inline void *
kde_output_device_mode_v2_get_user_data(struct kde_output_device_mode_v2 *kde_output_device_mode_v2)
{
	return wl_proxy_get_user_data((struct wl_proxy *) kde_output_device_mode_v2);
}

static inline uint32_t
kde_output_device_mode_v2_get_version(struct kde_output_device_mode_v2 *kde_output_device_mode_v2)
{
	return wl_proxy_get_version((struct wl_proxy *) kde_output_device_mode_v2);
}

/** @ingroup iface_kde_output_device_mode_v2 */
static inline void
kde_output_device_mode_v2_destroy(struct kde_output_device_mode_v2 *kde_output_device_mode_v2)
{
	wl_proxy_destroy((struct wl_proxy *) kde_output_device_mode_v2);
}

#ifdef  __cplusplus
}
#endif

#endif
