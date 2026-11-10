/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e46770; name: FUN_01e46770
 */


uint FUN_01e46770(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined **local_120 [2];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined1 auStack_f0 [48];
  ulong local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined2 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined2 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_6c = 0;
  local_90 = 0x7f7fffee;
  local_88 = 0xffffffffffffffff;
  local_68 = 0;
  uStack_60 = 0xffffffffffffffff;
  local_120[0] = &PTR_FUN_04287c08;
  local_c0 = 0;
  local_78 = 0xffffffff;
  local_80 = 0xffffff;
  local_74 = 0xf;
  local_70 = 0xffff;
  local_50 = 0xffffffff;
  local_58 = 0xffffff;
  local_4c = 0xf;
  local_48 = 0xffff;
  local_44 = 0;
  local_100 = 0x3e4ccccd;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_128 = param_1[1];
  local_130 = *param_1;
  uStack_138 = CONCAT44((float)((ulong)uStack_128 >> 0x20) +
                        (float)((ulong)param_2[1] >> 0x20) * 1500.0,
                        (float)uStack_128 + (float)param_2[1] * 1500.0);
  local_140 = CONCAT44((float)((ulong)local_130 >> 0x20) + (float)((ulong)*param_2 >> 0x20) * 1500.0
                       ,(float)local_130 + (float)*param_2 * 1500.0);
  if (((*PTR_DAT_0437a648 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar3 != 0))
  {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar5 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar5;
  uVar2 = FUN_02bf6354(*(undefined8 *)(lVar5 + 0x230),local_120,&local_140,&local_130,0x24000,
                       auStack_f0,1);
  uVar1 = local_c0;
  if ((local_c0 & 1) != 0) {
    lVar5 = tpidr_el0;
    lVar7 = *(long *)(lVar5 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar5 + 0x38d490) = lVar7;
    }
    plVar4 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
    puVar6 = (undefined8 *)(uVar1 - 0x11);
    *puVar6 = 0;
    (**(code **)(*plVar4 + 0x18))(plVar4,puVar6,(long)*(int *)(uVar1 - 9) + 0x10);
  }
  return uVar2 & 1;
}


