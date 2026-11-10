/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03151ac8; name: FUN_03151ac8
 */


void FUN_03151ac8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined1 *local_110;
  int local_108;
  uint local_104;
  undefined1 auStack_100 [64];
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [32];
  
  lVar5 = tpidr_el0;
  if (*(long *)(lVar5 + 0x38d490) == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar4;
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  else {
    lVar4 = *(long *)(*(long *)(lVar5 + 0x38d490) + 0x10);
  }
  if (lVar4 != 0) {
    FUN_032d5af0(lVar4,"TtDoVehicle",0xb);
  }
  puVar2 = PTR_PTR_0434a080;
  cVar1 = *(char *)(*(long *)(param_2 + 0x38) + 0x30);
  local_c0 = auStack_b0;
  local_b8 = -0x7ffffff000000000;
  if (cVar1 < '\x11') {
    local_b8._0_4_ = 0;
  }
  else {
    iVar6 = (int)cVar1;
    if (cVar1 < 0x21) {
      iVar6 = 0x20;
    }
    local_c0 = (undefined1 *)FUN_032bd1d4(PTR_PTR_0434a080,iVar6,4,local_c0,0,(long)&local_b8 + 4);
  }
  if ((int)local_b8 != cVar1) {
    local_b8 = CONCAT44(local_b8._4_4_,(int)cVar1);
  }
  cVar1 = *(char *)(*(long *)(param_2 + 0x38) + 0x30);
  local_110 = auStack_100;
  local_108 = 0;
  local_104 = 0x80000010;
  iVar6 = (int)cVar1;
  if (cVar1 < '\x11') {
    if (iVar6 == 0) goto LAB_03151be8;
  }
  else {
    iVar7 = iVar6;
    if (iVar6 < 0x21) {
      iVar7 = 0x20;
    }
    local_110 = (undefined1 *)FUN_032bd1d4(puVar2,iVar7,4,local_110,0,&local_104);
    if (local_108 == iVar6) goto LAB_03151be8;
  }
  local_108 = iVar6;
LAB_03151be8:
  FUN_03150e54(param_1,param_2,param_3,auStack_70,&local_c0,&local_110);
  FUN_031516cc(param_1,param_2,auStack_70,&local_c0,&local_110,param_4);
  if (*(long *)(lVar5 + 0x38d490) == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar5 + 0x38d490) = lVar4;
    lVar5 = *(long *)(lVar4 + 0x10);
  }
  else {
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38d490) + 0x10);
  }
  if (lVar5 != 0) {
    FUN_032d5b34(lVar5,&DAT_0390f40e);
  }
  local_108 = 0;
  if ((-1 < (int)local_104) && (local_110 != (undefined1 *)0x0)) {
    FUN_032cf244(puVar2,local_110,4,local_104 & 0x3fffffff);
  }
  lVar5 = local_b8;
  uVar3 = local_b8._4_4_;
  local_b8 = (ulong)local_b8._4_4_ << 0x20;
  if ((-1 < lVar5) && (local_c0 != (undefined1 *)0x0)) {
    FUN_032cf244(puVar2,local_c0,4,uVar3 & 0x3fffffff);
  }
  return;
}


