/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ef37c; name: FUN_029ef37c
 */


void FUN_029ef37c(long param_1,char *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  short sVar3;
  undefined2 uVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  *param_2 = '\0';
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 8) + (ulong)(byte)param_3[1] * 8 + 0x120);
  lVar8 = *(long *)(lVar7 + 0x60);
  cVar1 = param_3[0xc];
  uVar6 = FUN_02c6cf3c(*(undefined8 *)(lVar8 + 0x98));
  sVar3 = *(short *)(lVar7 + 0x74);
  if (((sVar3 == 0) || ((uVar6 & 1) != 0)) ||
     ((*(ushort *)(*(long *)(*(long *)(lVar8 + 0x98) + 0x10) + 4) >> 2 & 1) != 0)) {
    if (sVar3 != *(short *)(lVar7 + 0x72)) {
      return;
    }
LAB_029ef410:
    if (param_3[7] == '\0') {
      return;
    }
    FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0x11f,
                 *(undefined1 *)(lVar7 + 0x7d),0xffff0000);
    return;
  }
  if (sVar3 == *(short *)(lVar7 + 0x72)) goto LAB_029ef410;
  if ((cVar1 == '\0') && ((*(byte *)(lVar7 + 0x118) & 7) != 0)) {
    cVar1 = param_3[6];
  }
  else {
    *param_2 = '\x01';
    cVar1 = param_3[6];
  }
  if ((cVar1 != '\0') && (*param_3 != '\x1f')) {
    FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x99,*param_3,0);
  }
  if (*param_2 != '\0') {
    lVar8 = *(long *)(*(long *)(param_1 + 0x60) + 0x1680);
    uVar4 = *(undefined2 *)(param_3 + 2);
    cVar1 = param_3[9];
    cVar2 = param_3[0xb];
    uVar5 = FUN_0295462c(*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0xa8),
                         *(undefined1 *)(lVar7 + 0x7d));
    FUN_02a3b7b0(*(undefined8 *)(lVar8 + 0x20),lVar7,uVar4,0,0x1f,0,cVar2);
    if ((cVar1 != '\0') && ((uVar5 & 0xff) != 6)) {
      FUN_02a3e6b8(*(undefined8 *)(*(long *)(lVar8 + 0x20) + 0x18),0x8a,uVar5,0x33);
    }
    if ((param_3[0x12] & 0x7fU) != 0) {
      FUN_02a3a6c4(*(undefined8 *)(param_1 + 0x20),param_3 + 0x10);
      cVar1 = param_3[6];
      goto joined_r0x029ef540;
    }
    if (*(short *)(param_3 + 4) != 0) {
      FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9d,0x125,param_3[1],
                   *(short *)(param_3 + 4),0xffff0000);
    }
  }
  cVar1 = param_3[6];
joined_r0x029ef540:
  if (cVar1 == '\0') {
    return;
  }
  if (*param_3 == '\x1f') {
    return;
  }
  FUN_02a3e6b8(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9a);
  return;
}


