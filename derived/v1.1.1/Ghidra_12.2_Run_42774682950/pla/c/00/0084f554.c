/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084f554; name: FUN_0084f554
 */


void FUN_0084f554(long *param_1)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  
  uVar3 = *(ushort *)(param_1 + 3);
  uVar7 = (uint)uVar3;
  uVar4 = 0xffff;
  if (uVar7 == 0xffff) {
LAB_0084f65c:
    *(ushort *)((long)param_1 + 0x1c) = ~uVar4;
    (**(code **)(*param_1 + 0x18))(param_1);
    *(char *)((long)param_1 + 0x1e) = *(char *)((long)param_1 + 0x1e) + '\x01';
    return;
  }
  sVar6 = *(short *)((long)param_1 + 0x1a);
  iVar5 = 0;
  if (sVar6 != 0) goto LAB_0084f5a4;
  do {
    uVar9 = (uint)*(ushort *)(param_1 + 2);
    uVar8 = *(uint *)((long)param_1 + 0x14);
LAB_0084f5d8:
    do {
      uVar8 = uVar9 + 1 + uVar8;
      do {
        uVar8 = uVar8 - uVar9;
      } while (uVar9 <= uVar8);
      if (sVar6 == 0) {
        sVar6 = 0;
        sVar2 = *(short *)((long)param_1 + 0x1c);
      }
      else {
        sVar6 = sVar6 + -1;
        *(short *)((long)param_1 + 0x1a) = sVar6;
        sVar2 = *(short *)((long)param_1 + 0x1c);
      }
      if (sVar2 == 0) {
        uVar3 = uVar3 + 1;
        *(uint *)((long)param_1 + 0x14) = uVar8;
        *(undefined2 *)((long)param_1 + 0x1c) = 0;
        *(ushort *)(param_1 + 3) = uVar3;
        goto joined_r0x0084f658;
      }
      *(short *)((long)param_1 + 0x1c) = sVar2 + -1;
    } while (((short)(sVar2 + -1) != 0) &&
            (((sVar6 == 0 ||
              (pcVar10 = (char *)(param_1[1] + (ulong)uVar8 * 0x5b8), pcVar10 == (char *)0x0)) ||
             (*pcVar10 == '\0'))));
    *(uint *)((long)param_1 + 0x14) = uVar8;
joined_r0x0084f658:
    uVar4 = uVar3;
    if ((uVar7 ^ 0xffff) <= iVar5 + 1U) goto LAB_0084f65c;
    iVar5 = iVar5 + 1;
  } while (sVar6 == 0);
LAB_0084f5a4:
  uVar8 = *(uint *)((long)param_1 + 0x14);
  uVar4 = *(ushort *)(param_1 + 2);
  uVar9 = (uint)uVar4;
  uVar1 = 0;
  if (uVar4 <= uVar8) {
    uVar1 = (uint)uVar4;
  }
  pcVar10 = (char *)(param_1[1] + (ulong)(uVar8 - uVar1) * 0x5b8);
  if ((pcVar10 != (char *)0x0) && (uVar4 = uVar3, *pcVar10 != '\0')) goto LAB_0084f65c;
  goto LAB_0084f5d8;
}


