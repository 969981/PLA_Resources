/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a7a10; name: FUN_032a7a10
 */


undefined8
FUN_032a7a10(undefined1 *param_1,undefined1 *param_2,long param_3,long param_4,int param_5,
            undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined1 *local_1578;
  undefined8 local_1570;
  undefined1 auStack_1568 [5384];
  
  local_1578 = auStack_1568;
  local_1570 = -0x7ffffff000000000;
  if (param_5 < 0x11) {
    local_1570._0_4_ = 0;
    bVar1 = SBORROW4(0,param_5);
    iVar3 = -param_5;
    bVar2 = param_5 == 0;
    iVar4 = (int)local_1570;
    if (0 < param_5) goto LAB_032a7ad0;
  }
  else {
    local_1578 = (undefined1 *)
                 FUN_032adcc0(PTR_PTR_0434a080,param_5,local_1578,(long)&local_1570 + 4);
    bVar1 = SBORROW4((int)local_1570,param_5);
    iVar3 = (int)local_1570 - param_5;
    bVar2 = (int)local_1570 == param_5;
    iVar4 = (int)local_1570;
    if ((int)local_1570 < param_5) {
LAB_032a7ad0:
      puVar5 = local_1578 + (long)iVar4 * 0x150;
      local_1570 = CONCAT44(local_1570._4_4_,param_5);
      lVar8 = (long)param_5 * 0x150 + (long)iVar4 * -0x150;
      do {
        FUN_032a6040(puVar5);
        puVar5 = puVar5 + 0x150;
        lVar8 = lVar8 + -0x150;
      } while (lVar8 != 0);
      goto LAB_032a7af8;
    }
  }
  if (!bVar2 && iVar3 < 0 == bVar1) {
    lVar8 = (long)param_5 * 0x150 + (long)(int)local_1570 * -0x150;
    puVar5 = local_1578 + (long)(int)local_1570 * 0x150;
    local_1570 = CONCAT44(local_1570._4_4_,param_5);
    do {
      puVar5 = puVar5 + -0x150;
      FUN_032a61d4(puVar5);
      lVar8 = lVar8 + 0x150;
    } while (lVar8 != 0);
  }
LAB_032a7af8:
  if ((int)((ulong)(param_4 - param_3) >> 5) < 1) {
    uVar6 = 0;
  }
  else {
    uVar7 = (ulong)(param_4 - param_3) >> 5 & 0xffffffff;
    puVar9 = (undefined4 *)(param_3 + 0xc);
    uVar6 = 0x80040200;
    do {
      puVar5 = param_2;
      if (puVar9[2] != 0) {
        puVar5 = local_1578 + (long)(puVar9[2] + -1) * 0x150;
      }
      iVar3 = FUN_032a7bf4(*(undefined8 *)(puVar9 + -3),param_1,puVar5,*puVar9,param_6);
      if (iVar3 < 0) goto LAB_032a7b64;
      uVar7 = uVar7 - 1;
      puVar9 = puVar9 + 8;
      param_1 = puVar5;
    } while (uVar7 != 0);
    uVar6 = 0;
LAB_032a7b64:
  }
  if ((int)local_1570 != 0) {
    lVar8 = (long)(int)local_1570 * 0x150;
    do {
      FUN_032a61d4(local_1578 + lVar8 + -0x150);
      lVar8 = lVar8 + -0x150;
    } while (lVar8 != 0);
  }
  lVar8 = local_1570;
  uVar7 = (ulong)local_1570._4_4_;
  local_1570 = (ulong)local_1570._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_1578 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,local_1578,(uVar7 & 0x3fffffff) * 0x150);
  }
  return uVar6;
}


