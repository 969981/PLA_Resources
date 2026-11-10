/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029633d8; name: FUN_029633d8
 */


void FUN_029633d8(ushort *param_1,long param_2,long param_3,long param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  long lVar9;
  
  bVar1 = *(byte *)(param_3 + 0x7d);
  bVar2 = *(byte *)(param_4 + 0x7d);
  if (bVar1 < 6) {
    iVar5 = 0;
joined_r0x02963410:
    if (5 < bVar2) goto LAB_02963414;
LAB_02963438:
    iVar6 = 0;
  }
  else {
    if (bVar1 < 0x18) {
      iVar5 = 1;
      goto joined_r0x02963410;
    }
    iVar5 = (uint)(bVar1 < 0x1e) << 2;
    if (bVar2 < 6) goto LAB_02963438;
LAB_02963414:
    if (bVar2 < 0x18) {
      iVar6 = 1;
    }
    else {
      iVar6 = (uint)(bVar2 < 0x1e) << 2;
    }
  }
  bVar4 = false;
  if ((bVar1 == 0x1f) || (bVar2 == 0x1f)) goto LAB_0296350c;
  uVar3 = *(uint *)(param_2 + 0x110);
  if (bVar1 < 6) {
    lVar9 = 0;
  }
  else if (bVar1 < 0xc) {
    lVar9 = 2;
  }
  else if (bVar1 < 0x12) {
    lVar9 = 1;
  }
  else if (bVar1 < 0x18) {
    lVar9 = 3;
  }
  else {
    lVar9 = (ulong)(bVar1 < 0x1e) << 2;
  }
  if (uVar3 < 3) {
    cVar8 = (&PTR_DAT_04276c10)[(int)uVar3][lVar9];
    if (bVar2 < 6) goto LAB_029634c8;
LAB_029634ec:
    if (bVar2 < 0xc) {
      lVar9 = 2;
      goto joined_r0x029634d0;
    }
    if (bVar2 < 0x12) {
      lVar9 = 1;
    }
    else {
      if (0x17 < bVar2) {
        lVar9 = (ulong)(bVar2 < 0x1e) << 2;
        goto joined_r0x029634d0;
      }
      lVar9 = 3;
    }
    if (2 < uVar3) goto LAB_02963500;
LAB_029634d4:
    cVar7 = (&PTR_DAT_04276c10)[(int)uVar3][lVar9];
  }
  else {
    cVar8 = '\x02';
    if (5 < bVar2) goto LAB_029634ec;
LAB_029634c8:
    lVar9 = 0;
joined_r0x029634d0:
    if (uVar3 < 3) goto LAB_029634d4;
LAB_02963500:
    cVar7 = '\x02';
  }
  bVar4 = cVar8 == cVar7;
LAB_0296350c:
  if (iVar5 == 0) {
    if (bVar4) {
      return;
    }
    if (param_5 == 0) {
      if (param_1 == (ushort *)0x0) {
        return;
      }
    }
    else if (param_5 < 8) {
      if (param_5 == 7) {
        return;
      }
      param_1 = param_1 + 2;
    }
    else {
      param_1 = param_1 + 1;
    }
  }
  else {
    if (iVar6 != 0) {
      return;
    }
    if (!(bool)(bVar4 ^ 1)) {
      return;
    }
    if (param_5 == 0) {
      param_1 = param_1 + 3;
    }
    else if (param_5 < 8) {
      if (param_5 == 7) {
        return;
      }
      param_1 = param_1 + 5;
    }
    else {
      param_1 = param_1 + 4;
    }
  }
  if (*param_1 < 9999) {
    *param_1 = *param_1 + 1;
  }
  return;
}


