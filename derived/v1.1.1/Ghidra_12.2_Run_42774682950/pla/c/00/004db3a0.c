/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004db3a0; name: FUN_004db3a0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_004db3a0(int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar2 = *param_1;
  *param_1 = param_2;
  uVar6 = FUN_004e4880(param_1,0x11,0x300,param_3,0,0);
  if ((int)uVar6 == 0) {
    *param_1 = iVar2;
    return uVar6;
  }
  if ((param_1[0x136] != 0) && (*param_1 != 0x304)) {
    *param_1 = iVar2;
    uVar6 = 0x46;
    iVar5 = 0x10a;
    uVar7 = 0x75a;
    goto LAB_004db650;
  }
  iVar5 = **(int **)(param_1 + 2);
  if (iVar5 == 0x10000) {
    piVar8 = &DAT_04181630;
  }
  else {
    if (iVar5 != 0x1ffff) {
      if (*param_1 == iVar5) {
        return 1;
      }
      *param_1 = iVar2;
      uVar6 = 0x46;
      iVar5 = 0x10a;
      uVar7 = 0x764;
      goto LAB_004db650;
    }
    piVar8 = &DAT_041816c0;
  }
  iVar5 = FUN_004d88f0(param_1,&local_24,&local_28,&local_2c);
  if (iVar5 != 0) {
    *param_1 = iVar2;
    uVar6 = 0x46;
    uVar7 = 0x77b;
    goto LAB_004db650;
  }
  uVar3 = *(uint *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60);
  iVar5 = *param_1;
  if ((uVar3 >> 3 & 1) == 0) {
    if (iVar5 < local_24) {
LAB_004db528:
      *param_1 = iVar2;
      uVar6 = 0x46;
      iVar5 = 0x102;
      uVar7 = 0x782;
      goto LAB_004db650;
    }
    if (local_28 < iVar5) {
LAB_004db55c:
      *param_1 = iVar2;
      uVar6 = 0x46;
      iVar5 = 0x102;
      uVar7 = 0x788;
      goto LAB_004db650;
    }
  }
  else {
    iVar4 = 0xff00;
    if (iVar5 != 0x100) {
      iVar4 = iVar5;
    }
    iVar1 = 0xff00;
    if (local_24 != 0x100) {
      iVar1 = local_24;
    }
    if (iVar1 < iVar4) goto LAB_004db528;
    iVar1 = 0xff00;
    if (local_28 != 0x100) {
      iVar1 = local_28;
    }
    if (iVar4 < iVar1) goto LAB_004db55c;
  }
  if ((char)param_1[0x174] < '\0') {
    if (iVar5 == 0x303) goto LAB_004db588;
LAB_004db5cc:
    if (((((uVar3 >> 3 & 1) == 0) && (iVar5 < 0x303)) && (iVar5 < local_2c)) &&
       (*(long *)PTR_s_DOWNGRD_04374778 == *(long *)(*(long *)(param_1 + 0x2a) + 0xb0))) {
      *param_1 = iVar2;
      uVar6 = 0x2f;
      iVar5 = 0x175;
      uVar7 = 0x7a5;
      goto LAB_004db650;
    }
  }
  else {
    local_2c = local_28;
    if (iVar5 != 0x303) goto LAB_004db5cc;
LAB_004db588:
    if (local_2c < 0x304) goto LAB_004db5cc;
    if (*(long *)PTR_DAT_04374770 == *(long *)(*(long *)(param_1 + 0x2a) + 0xb0)) {
      *param_1 = iVar2;
      uVar6 = 0x2f;
      iVar5 = 0x175;
      uVar7 = 0x798;
      goto LAB_004db650;
    }
  }
  iVar4 = *piVar8;
  while (iVar4 != 0) {
    piVar8 = piVar8 + 6;
    if ((iVar5 == iVar4) && (*(code **)(piVar8 + -4) != (code *)0x0)) {
      uVar6 = (**(code **)(piVar8 + -4))();
      *(undefined8 *)(param_1 + 2) = uVar6;
      return 1;
    }
    iVar4 = *piVar8;
  }
  *param_1 = iVar2;
  uVar6 = 0x46;
  iVar5 = 0x102;
  uVar7 = 0x7b4;
LAB_004db650:
  FUN_004c99a0(param_1,uVar6,0x25f,iVar5,"external/openssl/ssl/statem/statem_lib.c",uVar7);
  return 0;
}


