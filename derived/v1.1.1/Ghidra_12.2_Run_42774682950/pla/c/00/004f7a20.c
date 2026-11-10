/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f7a20; name: FUN_004f7a20
 */


undefined8 FUN_004f7a20(uint *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(param_1 + 6);
  if (lVar2 == 0) {
    if (*(long *)(param_1 + 8) == 0) goto LAB_004f7d18;
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x488);
  }
  else {
    lVar4 = *(long *)(lVar2 + 0x140);
  }
  if ((lVar4 != 0) && ((*param_1 >> 6 & 1) != 0)) {
    lVar3 = *(long *)(param_1 + 0xc);
    if ((lVar3 != 0) && (*(long *)(lVar4 + 0x28) == 0 && (*param_1 & 0x20) != 0)) {
      if (lVar2 == 0) {
        iVar1 = 1;
        lVar2 = *(long *)(param_1 + 8);
      }
      else {
        iVar1 = FUN_004f0e70(lVar2,lVar3,1);
        lVar2 = *(long *)(param_1 + 8);
      }
      if (lVar2 != 0) {
        iVar1 = FUN_004f0c60(lVar2,lVar3,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    lVar2 = *(long *)(param_1 + 0xe);
    if (((lVar2 != 0) && (*(long *)(lVar4 + 0x50) == 0)) && (((byte)*param_1 >> 5 & 1) != 0)) {
      if (*(long *)(param_1 + 6) == 0) {
        iVar1 = 1;
        lVar3 = *(long *)(param_1 + 8);
      }
      else {
        iVar1 = FUN_004f0e70(*(long *)(param_1 + 6),lVar2,1);
        lVar3 = *(long *)(param_1 + 8);
      }
      if (lVar3 != 0) {
        iVar1 = FUN_004f0c60(lVar3,lVar2,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    lVar2 = *(long *)(param_1 + 0x10);
    if (((lVar2 != 0) && (*(long *)(lVar4 + 0x78) == 0)) && (((byte)*param_1 >> 5 & 1) != 0)) {
      if (*(long *)(param_1 + 6) == 0) {
        iVar1 = 1;
        lVar3 = *(long *)(param_1 + 8);
      }
      else {
        iVar1 = FUN_004f0e70(*(long *)(param_1 + 6),lVar2,1);
        lVar3 = *(long *)(param_1 + 8);
      }
      if (lVar3 != 0) {
        iVar1 = FUN_004f0c60(lVar3,lVar2,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    lVar2 = *(long *)(param_1 + 0x12);
    if (((lVar2 != 0) && (*(long *)(lVar4 + 0xa0) == 0)) && (((byte)*param_1 >> 5 & 1) != 0)) {
      if (*(long *)(param_1 + 6) == 0) {
        iVar1 = 1;
        lVar3 = *(long *)(param_1 + 8);
      }
      else {
        iVar1 = FUN_004f0e70(*(long *)(param_1 + 6),lVar2,1);
        lVar3 = *(long *)(param_1 + 8);
      }
      if (lVar3 != 0) {
        iVar1 = FUN_004f0c60(lVar3,lVar2,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    lVar2 = *(long *)(param_1 + 0x14);
    if (((lVar2 != 0) && (*(long *)(lVar4 + 200) == 0)) && (((byte)*param_1 >> 5 & 1) != 0)) {
      if (*(long *)(param_1 + 6) == 0) {
        iVar1 = 1;
        lVar3 = *(long *)(param_1 + 8);
      }
      else {
        iVar1 = FUN_004f0e70(*(long *)(param_1 + 6),lVar2,1);
        lVar3 = *(long *)(param_1 + 8);
      }
      if (lVar3 != 0) {
        iVar1 = FUN_004f0c60(lVar3,lVar2,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    lVar2 = *(long *)(param_1 + 0x16);
    if (((lVar2 != 0) && (*(long *)(lVar4 + 0xf0) == 0)) && (((byte)*param_1 >> 5 & 1) != 0)) {
      if (*(long *)(param_1 + 6) == 0) {
        iVar1 = 1;
        lVar3 = *(long *)(param_1 + 8);
      }
      else {
        iVar1 = FUN_004f0e70(*(long *)(param_1 + 6),lVar2,1);
        lVar3 = *(long *)(param_1 + 8);
      }
      if (lVar3 != 0) {
        iVar1 = FUN_004f0c60(lVar3,lVar2,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    lVar2 = *(long *)(param_1 + 0x18);
    if (((lVar2 != 0) && (*(long *)(lVar4 + 0x118) == 0)) && (((byte)*param_1 >> 5 & 1) != 0)) {
      if (*(long *)(param_1 + 6) == 0) {
        iVar1 = 1;
        lVar3 = *(long *)(param_1 + 8);
      }
      else {
        iVar1 = FUN_004f0e70(*(long *)(param_1 + 6),lVar2,1);
        lVar3 = *(long *)(param_1 + 8);
      }
      if (lVar3 != 0) {
        iVar1 = FUN_004f0c60(lVar3,lVar2,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    lVar2 = *(long *)(param_1 + 0x1a);
    if (((lVar2 != 0) && (*(long *)(lVar4 + 0x140) == 0)) && (((byte)*param_1 >> 5 & 1) != 0)) {
      if (*(long *)(param_1 + 6) == 0) {
        iVar1 = 1;
        lVar3 = *(long *)(param_1 + 8);
      }
      else {
        iVar1 = FUN_004f0e70(*(long *)(param_1 + 6),lVar2,1);
        lVar3 = *(long *)(param_1 + 8);
      }
      if (lVar3 != 0) {
        iVar1 = FUN_004f0c60(lVar3,lVar2,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
    lVar2 = *(long *)(param_1 + 0x1c);
    if (((lVar2 != 0) && (*(long *)(lVar4 + 0x168) == 0)) && (((byte)*param_1 >> 5 & 1) != 0)) {
      if (*(long *)(param_1 + 6) == 0) {
        iVar1 = 1;
        lVar4 = *(long *)(param_1 + 8);
      }
      else {
        iVar1 = FUN_004f0e70(*(long *)(param_1 + 6),lVar2,1);
        lVar4 = *(long *)(param_1 + 8);
      }
      if (lVar4 != 0) {
        iVar1 = FUN_004f0c60(lVar4,lVar2,1);
      }
      if (iVar1 < 1) {
        return 0;
      }
    }
  }
LAB_004f7d18:
  if (*(long *)(param_1 + 0x2a) != 0) {
    if (*(long *)(param_1 + 8) == 0) {
      if (*(long *)(param_1 + 6) == 0) {
        FUN_004078c0(*(long *)(param_1 + 0x2a),PTR_FUN_04374178);
      }
      else {
        FUN_004e2830();
      }
    }
    else {
      FUN_004e2800();
    }
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
  }
  return 1;
}


