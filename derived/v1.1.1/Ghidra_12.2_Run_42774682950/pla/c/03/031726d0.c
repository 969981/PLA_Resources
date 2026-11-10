/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031726d0; name: FUN_031726d0
 */


/* WARNING: Removing unreachable block (ram,0x031734cc) */
/* WARNING: Removing unreachable block (ram,0x031734f8) */
/* WARNING: Removing unreachable block (ram,0x03172b3c) */
/* WARNING: Removing unreachable block (ram,0x03172c7c) */
/* WARNING: Removing unreachable block (ram,0x03172cfc) */
/* WARNING: Removing unreachable block (ram,0x03172d00) */
/* WARNING: Removing unreachable block (ram,0x03172d04) */
/* WARNING: Removing unreachable block (ram,0x03172d10) */
/* WARNING: Removing unreachable block (ram,0x03172d14) */
/* WARNING: Removing unreachable block (ram,0x03172d4c) */
/* WARNING: Removing unreachable block (ram,0x03172d80) */
/* WARNING: Removing unreachable block (ram,0x03172d84) */
/* WARNING: Removing unreachable block (ram,0x03172dc4) */
/* WARNING: Removing unreachable block (ram,0x03172dd4) */
/* WARNING: Removing unreachable block (ram,0x03172dd8) */
/* WARNING: Removing unreachable block (ram,0x03172d8c) */
/* WARNING: Removing unreachable block (ram,0x03172d90) */
/* WARNING: Removing unreachable block (ram,0x03172ddc) */
/* WARNING: Removing unreachable block (ram,0x03172d94) */
/* WARNING: Removing unreachable block (ram,0x03172d18) */
/* WARNING: Removing unreachable block (ram,0x03172d1c) */
/* WARNING: Removing unreachable block (ram,0x03172d28) */
/* WARNING: Removing unreachable block (ram,0x03172d2c) */
/* WARNING: Removing unreachable block (ram,0x03172d30) */
/* WARNING: Removing unreachable block (ram,0x03172d34) */
/* WARNING: Removing unreachable block (ram,0x03172d38) */
/* WARNING: Removing unreachable block (ram,0x03172c5c) */
/* WARNING: Removing unreachable block (ram,0x03172d3c) */
/* WARNING: Removing unreachable block (ram,0x03172c68) */
/* WARNING: Removing unreachable block (ram,0x03172a78) */
/* WARNING: Removing unreachable block (ram,0x03173644) */
/* WARNING: Removing unreachable block (ram,0x03172a90) */
/* WARNING: Removing unreachable block (ram,0x03172ab0) */
/* WARNING: Removing unreachable block (ram,0x03173458) */
/* WARNING: Removing unreachable block (ram,0x03172ac0) */
/* WARNING: Removing unreachable block (ram,0x03173480) */
/* WARNING: Removing unreachable block (ram,0x03173484) */
/* WARNING: Removing unreachable block (ram,0x03172ac8) */
/* WARNING: Removing unreachable block (ram,0x03172ad8) */
/* WARNING: Removing unreachable block (ram,0x031734b4) */
/* WARNING: Removing unreachable block (ram,0x03172ae8) */
/* WARNING: Removing unreachable block (ram,0x03172984) */
/* WARNING: Removing unreachable block (ram,0x03172998) */
/* WARNING: Removing unreachable block (ram,0x03172a58) */
/* WARNING: Removing unreachable block (ram,0x03172a5c) */
/* WARNING: Removing unreachable block (ram,0x03172df4) */
/* WARNING: Removing unreachable block (ram,0x03172a60) */
/* WARNING: Removing unreachable block (ram,0x03173534) */
/* WARNING: Removing unreachable block (ram,0x03173558) */
/* WARNING: Removing unreachable block (ram,0x03173368) */
/* WARNING: Removing unreachable block (ram,0x031733c8) */
/* WARNING: Removing unreachable block (ram,0x03173380) */
/* WARNING: Removing unreachable block (ram,0x03172ea4) */
/* WARNING: Removing unreachable block (ram,0x03172e98) */
/* WARNING: Removing unreachable block (ram,0x03172e64) */
/* WARNING: Removing unreachable block (ram,0x03172e78) */
/* WARNING: Removing unreachable block (ram,0x03172e9c) */
/* WARNING: Removing unreachable block (ram,0x03172f44) */
/* WARNING: Removing unreachable block (ram,0x03172f58) */
/* WARNING: Removing unreachable block (ram,0x03172f64) */
/* WARNING: Removing unreachable block (ram,0x03172f68) */
/* WARNING: Removing unreachable block (ram,0x03172f6c) */
/* WARNING: Removing unreachable block (ram,0x031730fc) */
/* WARNING: Removing unreachable block (ram,0x03173100) */
/* WARNING: Removing unreachable block (ram,0x0317310c) */
/* WARNING: Removing unreachable block (ram,0x03173110) */
/* WARNING: Removing unreachable block (ram,0x03173114) */
/* WARNING: Removing unreachable block (ram,0x03173564) */
/* WARNING: Removing unreachable block (ram,0x03173118) */
/* WARNING: Removing unreachable block (ram,0x03173124) */
/* WARNING: Removing unreachable block (ram,0x03172f28) */
/* WARNING: Removing unreachable block (ram,0x03172f34) */
/* WARNING: Removing unreachable block (ram,0x03172f38) */
/* WARNING: Removing unreachable block (ram,0x03172f3c) */
/* WARNING: Removing unreachable block (ram,0x03173130) */
/* WARNING: Removing unreachable block (ram,0x03173340) */
/* WARNING: Removing unreachable block (ram,0x031733bc) */
/* WARNING: Removing unreachable block (ram,0x03173358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_031726d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            long param_5)

{
  short sVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long in_stack_00000010;
  ulong local_118;
  long local_b0;
  char local_a8;
  undefined4 local_a0 [4];
  
  local_a0[0] = param_4;
  lVar2 = nn::os::GetSystemTick();
  FUN_0316c0bc(&local_b0,param_1,local_a0);
  lVar3 = tpidr_el0;
  lVar7 = *(long *)(lVar3 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar7;
  }
  lVar7 = *(long *)(lVar7 + 8);
  if (*(ulong *)(lVar7 + 0x10) < 0x1000) {
LAB_031733d4:
    lVar4 = FUN_032ce670(lVar7,0x1000);
  }
  else {
    lVar4 = *(long *)(lVar7 + 0x18);
    if (*(ulong *)(lVar7 + 0x20) < lVar4 + 0x1000U) goto LAB_031733d4;
    *(ulong *)(lVar7 + 0x18) = lVar4 + 0x1000U;
  }
  sVar1 = *(short *)(param_5 + 8);
  if (sVar1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar3 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar3 + 0x38d490) = lVar7;
    }
    lVar8 = *(long *)(lVar7 + 8);
    uVar5 = (long)(int)sVar1 * 0x20 + 0x7fU & 0xffffffffffffff80;
    if (uVar5 <= *(ulong *)(lVar8 + 0x10)) {
      lVar7 = *(long *)(lVar8 + 0x18);
      uVar5 = lVar7 + uVar5;
      if (uVar5 <= *(ulong *)(lVar8 + 0x20)) {
        *(ulong *)(lVar8 + 0x18) = uVar5;
        goto LAB_03172868;
      }
    }
    lVar7 = FUN_032ce670(lVar8);
  }
LAB_03172868:
  FUN_031684f0(param_1,param_2,param_4,param_5);
  uVar5 = (ulong)(uint)(int)sVar1 << 0x20;
  local_118 = uVar5 | 0x8000000000000000;
  lVar8 = *(long *)(lVar3 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar8;
  }
  lVar8 = *(long *)(lVar8 + 8);
  uVar6 = (ulong)(int)(sVar1 * 0x20 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar8 + 0x10) < uVar6) || (*(long *)(lVar8 + 0x18) != uVar6 + lVar7)) ||
     (*(long *)(lVar8 + 0x28) == lVar7)) {
    if (lVar7 != 0) {
      if (*(ulong *)(lVar8 + 0x10) < uVar6) {
        *(int *)(*(long *)(lVar8 + 8) + 0x20) = *(int *)(*(long *)(lVar8 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar8 + 0x40) + 0x18))(*(long **)(lVar8 + 0x40),lVar7);
      }
      else if (*(long *)(lVar8 + 0x18) == uVar6 + lVar7) {
        *(long *)(lVar8 + 0x18) = lVar7;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar8,lVar7);
      }
    }
  }
  else {
    *(long *)(lVar8 + 0x18) = lVar7;
  }
  if ((lVar7 != 0) && (-1 < (long)local_118)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,lVar7,((uVar5 & 0x3fffffff00000000) >> 0x20) << 5);
  }
  NEON_fmov(0x3f800000,4);
  lVar7 = nn::os::GetSystemTick();
  lVar8 = nn::os::GetSystemTick();
  *(long *)(in_stack_00000010 + 0x78) = (lVar8 - lVar7) + *(long *)(in_stack_00000010 + 0x78);
  *(int *)(in_stack_00000010 + 0x80) = *(int *)(in_stack_00000010 + 0x80) + 1;
  lVar7 = nn::os::GetSystemTick();
  lVar8 = nn::os::GetSystemTick();
  *(long *)(in_stack_00000010 + 0x90) = (lVar8 - lVar7) + *(long *)(in_stack_00000010 + 0x90);
  *(int *)(in_stack_00000010 + 0x98) = *(int *)(in_stack_00000010 + 0x98) + 1;
  lVar7 = *(long *)(lVar3 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar7;
  }
  lVar8 = *(long *)(lVar7 + 8);
  if ((*(long *)(lVar8 + 0x18) == 0) && (*(long *)(lVar8 + 0x28) != 0)) {
    *(undefined8 *)(lVar8 + 0x18) = 0;
  }
  else {
    lVar7 = *(long *)(lVar3 + 0x38d490);
  }
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar7;
  }
  lVar7 = *(long *)(lVar7 + 8);
  if ((*(long *)(lVar7 + 0x18) == 0) && (*(long *)(lVar7 + 0x28) != 0)) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
  }
  lVar7 = *(long *)(lVar3 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar7;
  }
  lVar3 = *(long *)(lVar7 + 8);
  if (((*(ulong *)(lVar3 + 0x10) < 0x1000) || (*(long *)(lVar3 + 0x18) != lVar4 + 0x1000)) ||
     (*(long *)(lVar3 + 0x28) == lVar4)) {
    if (lVar4 != 0) {
      if (*(ulong *)(lVar3 + 0x10) < 0x1000) {
        *(int *)(*(long *)(lVar3 + 8) + 0x20) = *(int *)(*(long *)(lVar3 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar3 + 0x40) + 0x18))(*(long **)(lVar3 + 0x40),lVar4);
      }
      else if (*(long *)(lVar3 + 0x18) == lVar4 + 0x1000) {
        *(long *)(lVar3 + 0x18) = lVar4;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar3,lVar4);
      }
    }
  }
  else {
    *(long *)(lVar3 + 0x18) = lVar4;
  }
  if ((local_b0 != 0) && (local_a8 != '\0')) {
    FUN_032d5b34(local_b0,&DAT_0390f40e);
  }
  lVar3 = nn::os::GetSystemTick();
  *(long *)(in_stack_00000010 + 8) = (lVar3 - lVar2) + *(long *)(in_stack_00000010 + 8);
  *(int *)(in_stack_00000010 + 0x10) = *(int *)(in_stack_00000010 + 0x10) + 1;
  return 1;
}


