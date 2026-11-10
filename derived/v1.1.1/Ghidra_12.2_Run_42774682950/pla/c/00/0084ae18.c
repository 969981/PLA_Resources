/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084ae18; name: FUN_0084ae18
 */


void FUN_0084ae18(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  if (*(short *)(param_2 + 0x28) == 0) {
    local_38[0] = 0x1040c;
  }
  else {
    *(undefined4 *)(param_2 + 0x2c) = 0;
    *(undefined8 *)(param_2 + 0x30) = 1;
    (**(code **)(*(long *)(param_2 + 0x38) + 0x10))();
    *(undefined8 *)(param_2 + 0x3f8) = 0;
    (**(code **)(*(long *)(param_2 + 0x60) + 0x10))();
    *(undefined8 *)(param_2 + 0x400) = 0;
    (**(code **)(*(long *)(param_2 + 0x88) + 0x10))();
    *(undefined8 *)(param_2 + 0x408) = 0;
    (**(code **)(*(long *)(param_2 + 0xb0) + 0x10))();
    *(undefined8 *)(param_2 + 0x410) = 0;
    (**(code **)(*(long *)(param_2 + 0xd8) + 0x10))((long *)(param_2 + 0xd8));
    *(undefined8 *)(param_2 + 0x418) = 0;
    (**(code **)(*(long *)(param_2 + 0x100) + 0x10))(param_2 + 0x100);
    *(undefined8 *)(param_2 + 0x420) = 0;
    (**(code **)(*(long *)(param_2 + 0x128) + 0x10))(param_2 + 0x128);
    *(undefined8 *)(param_2 + 0x428) = 0;
    (**(code **)(*(long *)(param_2 + 0x150) + 0x10))(param_2 + 0x150);
    *(undefined8 *)(param_2 + 0x430) = 0;
    (**(code **)(*(long *)(param_2 + 0x178) + 0x10))(param_2 + 0x178);
    *(undefined8 *)(param_2 + 0x438) = 0;
    (**(code **)(*(long *)(param_2 + 0x1a0) + 0x10))(param_2 + 0x1a0);
    *(undefined8 *)(param_2 + 0x440) = 0;
    (**(code **)(*(long *)(param_2 + 0x1c8) + 0x10))(param_2 + 0x1c8);
    *(undefined8 *)(param_2 + 0x448) = 0;
    (**(code **)(*(long *)(param_2 + 0x1f0) + 0x10))(param_2 + 0x1f0);
    *(undefined8 *)(param_2 + 0x450) = 0;
    (**(code **)(*(long *)(param_2 + 0x218) + 0x10))(param_2 + 0x218);
    *(undefined8 *)(param_2 + 0x458) = 0;
    (**(code **)(*(long *)(param_2 + 0x240) + 0x10))(param_2 + 0x240);
    *(undefined8 *)(param_2 + 0x460) = 0;
    (**(code **)(*(long *)(param_2 + 0x268) + 0x10))(param_2 + 0x268);
    *(undefined8 *)(param_2 + 0x468) = 0;
    (**(code **)(*(long *)(param_2 + 0x290) + 0x10))(param_2 + 0x290);
    *(undefined8 *)(param_2 + 0x470) = 0;
    (**(code **)(*(long *)(param_2 + 0x2b8) + 0x10))(param_2 + 0x2b8);
    *(undefined8 *)(param_2 + 0x478) = 0;
    (**(code **)(*(long *)(param_2 + 0x2e0) + 0x10))(param_2 + 0x2e0);
    *(undefined8 *)(param_2 + 0x480) = 0;
    (**(code **)(*(long *)(param_2 + 0x308) + 0x10))(param_2 + 0x308);
    *(undefined8 *)(param_2 + 0x488) = 0;
    (**(code **)(*(long *)(param_2 + 0x330) + 0x10))(param_2 + 0x330);
    *(undefined8 *)(param_2 + 0x490) = 0;
    (**(code **)(*(long *)(param_2 + 0x358) + 0x10))(param_2 + 0x358);
    *(undefined8 *)(param_2 + 0x498) = 0;
    (**(code **)(*(long *)(param_2 + 0x380) + 0x10))(param_2 + 0x380);
    *(undefined8 *)(param_2 + 0x4a0) = 0;
    (**(code **)(*(long *)(param_2 + 0x3a8) + 0x10))(param_2 + 0x3a8);
    *(undefined8 *)(param_2 + 0x4a8) = 0;
    (**(code **)(*(long *)(param_2 + 0x3d0) + 0x10))(param_2 + 0x3d0);
    *(undefined8 *)(param_2 + 0x4b0) = 0;
    memset((void *)(param_2 + 0x4f0),0,4);
    memset((void *)(param_2 + 0x4f4),0,4);
    memset((void *)(param_2 + 0x518),0,4);
    *(undefined1 *)(param_2 + 0x4b8) = 0;
    *(undefined8 *)(param_2 + 0x4c0) = 0;
    puVar1 = PTR_DAT_043774c8;
    *(undefined8 *)(param_2 + 0x508) = 0;
    *(undefined8 *)(param_2 + 0x510) = 0;
    *(long *)(param_2 + 0x4e8) = *(long *)puVar1 / 0x14;
    local_38[0] = 0;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  FUN_007ee578(param_1,local_38);
  return;
}


