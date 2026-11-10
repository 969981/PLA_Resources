/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003084f0; name: FUN_003084f0
 */


undefined8 FUN_003084f0(undefined2 *param_1,uint *param_2)

{
  uint16_t uVar1;
  undefined2 local_a0;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 local_20;
  
  if (*(char *)((long)param_1 + 1) != '\x02') {
    if (*(char *)((long)param_1 + 1) != '\x1c') {
      return 0;
    }
    if (*(long *)((long)param_1 + 8) != 0 || *(int *)((long)param_1 + 0x10) != -0x10000) {
      if (*(char *)((long)param_1 + 8) != '\0') {
        return 0;
      }
      if (*(char *)((long)param_1 + 9) != '\0') {
        return 0;
      }
      if (*(char *)((long)param_1 + 10) != '\0') {
        return 0;
      }
      if (*(char *)((long)param_1 + 0xb) != '\0') {
        return 0;
      }
      if (*(char *)((long)param_1 + 0xc) != '\0') {
        return 0;
      }
      if (*(char *)((long)param_1 + 0xd) != '\0') {
        return 0;
      }
      if (*(char *)((long)param_1 + 0xe) != '\0') {
        return 0;
      }
      if (*(char *)((long)param_1 + 0xf) != '\0') {
        return 0;
      }
      if (*(char *)((long)param_1 + 0x10) != '\0') {
        return 0;
      }
      if (*(char *)((long)param_1 + 0x11) != '\0') {
        return 0;
      }
      if (*(char *)((long)param_1 + 0x12) != '\0') {
        return 0;
      }
      if (*(char *)((long)param_1 + 0x13) != '\0') {
        return 0;
      }
      if (*(char *)((long)param_1 + 0x14) != '\0') {
        return 0;
      }
      if (*(char *)((long)param_1 + 0x15) != '\0') {
        return 0;
      }
      if (*(char *)((long)param_1 + 0x16) != '\0') {
        return 0;
      }
      if (*(char *)((long)param_1 + 0x17) != '\0') {
        return 0;
      }
      goto LAB_003085a4;
    }
    uStack_98 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_38 = 0;
    local_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    _local_a0 = CONCAT44(*(undefined4 *)((long)param_1 + 0x14),
                         CONCAT22(*(undefined2 *)((long)param_1 + 2),0x200));
    local_20 = 0x10;
    param_1 = &local_a0;
  }
  if (*(int *)((long)param_1 + 4) != 0) {
    return 0;
  }
LAB_003085a4:
  uVar1 = ntohs(*(uint16_t *)((long)param_1 + 2));
  *param_2 = (uint)uVar1;
  return 1;
}


