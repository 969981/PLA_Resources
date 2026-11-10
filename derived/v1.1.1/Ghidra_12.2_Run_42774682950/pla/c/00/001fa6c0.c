/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fa6c0; name: FUN_001fa6c0
 */


undefined8 FUN_001fa6c0(long param_1,long param_2,int param_3)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte bVar7;
  long local_38;
  
  local_38 = param_2;
  if (param_3 == 3) {
    if ((*(long *)(param_1 + 0x6d8) != -1) &&
       (*(long *)(param_1 + 0x6d8) <= *(long *)(param_1 + 0x6d0))) {
      param_3 = 1;
      bVar2 = true;
      goto LAB_001fa780;
    }
    *(long *)(param_1 + 0x6d0) = *(long *)(param_1 + 0x6d0) + 1;
    *(ushort *)(param_1 + 0x15a4) = *(ushort *)(param_1 + 0x15a4) | 2;
    if (-1 < *(char *)(param_1 + 0xf42)) {
LAB_001fa77c:
      bVar2 = false;
      param_3 = 3;
      goto LAB_001fa780;
    }
    if ((*(byte *)(param_1 + 0xf68) >> 1 & 1) != 0) {
      FUN_002044d4(*(undefined8 *)(param_1 + 0xf50));
      *(undefined8 *)(param_1 + 0xf50) = 0;
      *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) & 0xfd;
    }
    lVar4 = FUN_002044f4(*(undefined8 *)(param_1 + 0xf48));
    *(long *)(param_1 + 0xf50) = lVar4;
    if (lVar4 != 0) {
      *(byte *)(param_1 + 0xf68) = *(byte *)(param_1 + 0xf68) | 2;
      goto LAB_001fa77c;
    }
LAB_001fa7cc:
    uVar6 = 0x1b;
    goto LAB_001fa94c;
  }
  bVar2 = false;
LAB_001fa780:
  uVar5 = FUN_001fac58(param_2,0,8);
  iVar3 = FUN_001fb304(*(undefined8 *)(param_1 + 0x1548),0,param_2,(ulong)(param_3 == 1) << 3);
  if (iVar3 == 0) {
    iVar3 = FUN_001faec0(*(undefined8 *)(param_1 + 0x1548),0,&local_38,0);
    if (iVar3 != 0) {
      uVar6 = FUN_001fd508();
      return uVar6;
    }
    if (param_3 == 1) goto LAB_001fa814;
    if ((uVar5 & 1) != 0) {
      *(ushort *)(param_1 + 0x15a4) = *(ushort *)(param_1 + 0x15a4) & 0xffef;
    }
    bVar7 = *(byte *)(param_1 + 0xf68);
    if ((bVar7 & 1) != 0) {
      FUN_002044d4(*(undefined8 *)(param_1 + 0xf48));
      bVar7 = *(byte *)(param_1 + 0xf68);
      *(undefined8 *)(param_1 + 0xf48) = 0;
    }
    *(long *)(param_1 + 0xf48) = local_38;
    *(byte *)(param_1 + 0xf68) = bVar7 | 1;
    FUN_001f3934(param_1,"Issue another request to this URL: \'%s\'\n");
    iVar3 = *(int *)(param_1 + 0x15f8);
    if (iVar3 == 0x12f) {
      if ((*(int *)(param_1 + 0xa38) != 1) && ((*(byte *)(param_1 + 0x6e0) >> 2 & 1) == 0)) {
        *(undefined4 *)(param_1 + 0xa38) = 1;
        puVar1 = &DAT_0392dc1b;
        if ((*(ulong *)(param_1 + 0xf40) & 0x1000000) != 0) {
          puVar1 = &DAT_038a009a;
        }
        FUN_001f3934(param_1,"Disables POST, goes with %s\n",puVar1);
      }
    }
    else if (iVar3 == 0x12e) {
      if (*(int *)(param_1 + 0xa38) - 2U < 3) {
        bVar7 = *(byte *)(param_1 + 0x6e0) >> 1;
        goto joined_r0x001fa8cc;
      }
    }
    else if ((iVar3 == 0x12d) && (*(int *)(param_1 + 0xa38) - 2U < 3)) {
      bVar7 = *(byte *)(param_1 + 0x6e0);
joined_r0x001fa8cc:
      if ((bVar7 & 1) == 0) {
        FUN_001f3934(param_1,"Switch from POST to GET\n");
        *(undefined4 *)(param_1 + 0xa38) = 1;
      }
    }
    FUN_001f2dcc(param_1,10);
    FUN_001f2d64(param_1);
  }
  else {
    if (param_3 != 1) {
      uVar6 = FUN_001fd508();
      return uVar6;
    }
    local_38 = FUN_002044f4(param_2);
    if (local_38 == 0) goto LAB_001fa7cc;
LAB_001fa814:
    *(long *)(param_1 + 0x1640) = local_38;
    if (bVar2) {
      FUN_001f3ae0(param_1,"Maximum (%ld) redirects followed",*(undefined8 *)(param_1 + 0x6d8));
      return 0x2f;
    }
  }
  uVar6 = 0;
LAB_001fa94c:
  return uVar6;
}


