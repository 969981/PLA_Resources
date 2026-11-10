/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03150e54; name: FUN_03150e54
 */


void FUN_03150e54(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,long *param_6)

{
  float *pfVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  char cVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_140 [13];
  undefined1 local_133;
  undefined1 auStack_130 [8];
  long local_128;
  undefined1 *local_118;
  undefined8 local_110;
  undefined1 local_108 [128];
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 auStack_78 [40];
  
  lVar5 = tpidr_el0;
  lVar7 = *(long *)(lVar5 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar7;
    lVar4 = *(long *)(lVar7 + 0x10);
  }
  else {
    lVar4 = *(long *)(lVar7 + 0x10);
  }
  if (lVar4 != 0) {
    FUN_032d5af0(lVar4,"TtUpdateComponents",0x12);
    lVar7 = *(long *)(lVar5 + 0x38d490);
  }
  local_118 = local_108;
  local_110 = -0x7fffffe000000000;
  local_88 = auStack_78;
  local_80 = -0x7fffffe000000000;
  cVar8 = *(char *)(*(long *)(param_2 + 0x38) + 0x30);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar7;
  }
  lVar7 = *(long *)(lVar7 + 8);
  uVar6 = (long)cVar8 * 4 + 0x7fU & 0xffffffffffffff80;
  if (uVar6 <= *(ulong *)(lVar7 + 0x10)) {
    local_128 = *(long *)(lVar7 + 0x18);
    uVar6 = local_128 + uVar6;
    if (uVar6 <= *(ulong *)(lVar7 + 0x20)) {
      *(ulong *)(lVar7 + 0x18) = uVar6;
      goto LAB_03150f2c;
    }
  }
  local_128 = FUN_032ce670();
LAB_03150f2c:
  FUN_0314f6a8(param_2,param_3);
  local_133 = *(undefined1 *)(param_2 + 0x104);
  (**(code **)(**(long **)(param_2 + 0x40) + 0x20))
            (param_1,*(long **)(param_2 + 0x40),param_2,*(undefined8 *)(param_2 + 0xe8),auStack_140)
  ;
  *(undefined1 *)(param_2 + 0x104) = local_133;
  FUN_0314f830(param_1,param_2,auStack_140);
  FUN_0314fa00(param_1,param_2,auStack_130);
  FUN_0314fa84(param_1,param_2,auStack_140,auStack_130);
  FUN_0314fae0(param_1,param_2,auStack_140,&local_118);
  (**(code **)(**(long **)(param_2 + 0x68) + 0x20))
            (param_1,*(long **)(param_2 + 0x68),param_2,param_3,*param_5);
  (**(code **)(**(long **)(param_2 + 0x70) + 0x20))
            (param_1,*(long **)(param_2 + 0x70),param_2,param_4);
  lVar7 = local_128;
  lVar4 = *(long *)(param_2 + 0x38);
  cVar8 = *(char *)(lVar4 + 0x30);
  if ('\0' < cVar8) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      lVar11 = lVar10 * 4;
      lVar10 = lVar10 + 1;
      pfVar1 = (float *)(*(long *)(lVar4 + 0xa0) + lVar9);
      lVar9 = lVar9 + 0x28;
      *(float *)(*param_6 + lVar11) =
           (*(float *)(local_118 + lVar11) + *(float *)(local_128 + lVar11)) / *pfVar1;
      lVar4 = *(long *)(param_2 + 0x38);
      cVar8 = *(char *)(lVar4 + 0x30);
    } while (lVar10 < cVar8);
  }
  lVar4 = *(long *)(lVar5 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar4;
  }
  lVar10 = *(long *)(lVar4 + 8);
  uVar6 = (ulong)(int)(cVar8 * 4 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar10 + 0x10) < uVar6) || (*(long *)(lVar10 + 0x18) != uVar6 + lVar7)) ||
     (*(long *)(lVar10 + 0x28) == lVar7)) {
    FUN_032cedf0(lVar10,lVar7);
    lVar4 = *(long *)(lVar5 + 0x38d490);
  }
  else {
    *(long *)(lVar10 + 0x18) = lVar7;
  }
  if (lVar4 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar7;
    lVar5 = *(long *)(lVar7 + 0x10);
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x10);
  }
  if (lVar5 != 0) {
    FUN_032d5b34(lVar5,&DAT_0390f40e);
  }
  lVar5 = local_80;
  puVar2 = PTR_PTR_0434a080;
  uVar3 = local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_88 != (undefined1 *)0x0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_88,1,uVar3 & 0x3fffffff);
  }
  lVar5 = local_110;
  local_80 = CONCAT44(0x80000000,(undefined4)local_80);
  uVar3 = local_110._4_4_;
  local_88 = (undefined1 *)0x0;
  local_110 = (ulong)local_110._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_118 != (undefined1 *)0x0)) {
    FUN_032cf244(puVar2,local_118,4,uVar3 & 0x3fffffff);
  }
  return;
}


