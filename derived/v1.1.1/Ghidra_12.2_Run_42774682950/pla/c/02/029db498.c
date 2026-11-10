/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029db498; name: FUN_029db498
 */


void FUN_029db498(long param_1,undefined1 *param_2,long *param_3)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  
  *param_2 = 0;
  if (*param_3 == 0) {
    return;
  }
  piVar6 = *(int **)(*(long *)(param_1 + 8) + 0x58);
  if (*piVar6 == 0) {
    if ((((char)param_3[1] == '\0') && (*(short *)(*param_3 + 0x74) != 0)) &&
       (uVar5 = FUN_029789d8(*(undefined8 *)(param_1 + 0x38)), (uVar5 & 1) != 0)) {
      return;
    }
    if ((*(byte *)(*(long *)(param_1 + 0x40) + 200) & 1) == 0) {
      if ((*(char *)((long)param_3 + 9) == '\0') ||
         (uVar5 = FUN_02978d5c(*(undefined8 *)(param_1 + 0x38),*param_3), (uVar5 & 1) == 0)) {
        FUN_029db68c(param_1,*param_3);
      }
      goto LAB_029db538;
    }
  }
  else if (((char)piVar6[0x15] != '\0') && ((*(byte *)(*(long *)(param_1 + 0x40) + 200) & 1) == 0))
  {
    FUN_02a3fa08(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),0x9c,0x2bf,0xffff0000);
LAB_029db538:
    *(ulong *)(*(long *)(param_1 + 0x40) + 200) = *(ulong *)(*(long *)(param_1 + 0x40) + 200) | 1;
  }
  bVar4 = *(byte *)(*param_3 + 0x7d);
  cVar1 = '\x03';
  if (0x17 < bVar4) {
    cVar1 = (bVar4 < 0x1e) << 2;
  }
  cVar2 = '\x01';
  if (0x11 < bVar4) {
    cVar2 = cVar1;
  }
  cVar1 = '\x02';
  if (0xb < bVar4) {
    cVar1 = cVar2;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  cVar2 = '\0';
  if (5 < bVar4) {
    cVar2 = cVar1;
  }
  uVar3 = *(uint *)((long)param_3 + 0xc);
  piVar6 = *(int **)(*(long *)(*(long *)(lVar7 + 0x20) + 0x10) + 0x1e8);
  piVar8 = piVar6 + 1;
  if ((char)*piVar8 != cVar2) {
    if ((char)*piVar8 == '\x05') {
      lVar9 = 0;
    }
    else {
      piVar8 = (int *)((long)piVar6 + 5);
      if (*(char *)piVar8 == cVar2) goto LAB_029db668;
      if (*(char *)piVar8 == '\x05') {
        lVar9 = 1;
      }
      else {
        piVar8 = (int *)((long)piVar6 + 6);
        if (*(char *)piVar8 == cVar2) goto LAB_029db668;
        if (*(char *)piVar8 == '\x05') {
          lVar9 = 2;
        }
        else {
          piVar8 = (int *)((long)piVar6 + 7);
          if (*(char *)piVar8 == cVar2) goto LAB_029db668;
          if (*(char *)piVar8 == '\x05') {
            lVar9 = 3;
          }
          else {
            piVar8 = piVar6 + 2;
            if (((char)*piVar8 == cVar2) || ((char)*piVar8 != '\x05')) goto LAB_029db668;
            lVar9 = 4;
          }
        }
      }
    }
    *(char *)piVar8 = cVar2;
    piVar6[lVar9 + 3] = uVar3;
    *piVar6 = *piVar6 + 1;
  }
LAB_029db668:
  FUN_02a3e6b8(*(undefined8 *)(lVar7 + 0x18),0x50,cVar2,uVar3 & 0xff);
  *param_2 = 1;
  return;
}


