/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084b940; name: FUN_0084b940
 */


ulong FUN_0084b940(ulong param_1)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  short sVar7;
  char *pcVar8;
  long lVar9;
  char acStack_68 [24];
  
  uVar4 = param_1;
  if (*(short *)(param_1 + 0x32) != 0) {
    uVar3 = *(uint *)(param_1 + 0x2c);
    uVar5 = (uint)*(ushort *)(param_1 + 0x28);
    do {
      lVar9 = *(long *)(param_1 + 0x20);
      uVar1 = 0;
      if (uVar5 <= uVar3) {
        uVar1 = uVar5;
      }
      if ((*(short *)(lVar9 + (ulong)(uVar3 - uVar1) * 0x5d0 + 0x24) == 0) &&
         (*(short *)(param_1 + 0x30) == -1)) {
        FUN_0084f420(param_1 + 0x18);
        memset((uint *)(param_1 + 0x4f4),0,4);
        uVar4 = 0;
        lVar6 = *(long *)(param_1 + 0x3f8);
        while( true ) {
          if (lVar6 != 0) {
            lVar6 = param_1 + (uVar4 >> 5 & 7) * 4;
            uVar5 = 1 << (ulong)((uint)uVar4 & 0x1f);
            if ((*(uint *)(lVar6 + 0x4f0) & uVar5) == 0) {
              *(uint *)(lVar6 + 0x4f4) = *(uint *)(lVar6 + 0x4f4) | uVar5;
            }
          }
          if (uVar4 == 0x17) break;
          uVar4 = uVar4 + 1;
          lVar6 = ((long *)(param_1 + 0x3f8))[uVar4];
        }
        uVar5 = sprintf(acStack_68,"%08x",(ulong)*(uint *)(param_1 + 0x4f4));
        uVar4 = (ulong)uVar5;
      }
      if (*(int *)(lVar9 + (ulong)(uVar3 - uVar1) * 0x5d0 + 0x2c) != 0) {
        return uVar4;
      }
      uVar5 = (uint)*(ushort *)(param_1 + 0x28);
      uVar3 = *(uint *)(param_1 + 0x2c);
      do {
        uVar3 = uVar5 + 1 + uVar3;
        do {
          uVar3 = uVar3 - uVar5;
        } while (uVar5 <= uVar3);
        sVar7 = *(short *)(param_1 + 0x32);
        if (sVar7 != 0) {
          sVar7 = sVar7 + -1;
          *(short *)(param_1 + 0x32) = sVar7;
        }
        sVar2 = *(short *)(param_1 + 0x34);
        if (sVar2 == 0) {
          *(uint *)(param_1 + 0x2c) = uVar3;
          *(undefined2 *)(param_1 + 0x34) = 0;
          *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + 1;
          goto joined_r0x0084b9a4;
        }
        *(short *)(param_1 + 0x34) = sVar2 + -1;
      } while ((sVar2 != 1) &&
              (((sVar7 == 0 ||
                (pcVar8 = (char *)(*(long *)(param_1 + 0x20) + (ulong)uVar3 * 0x5d0),
                pcVar8 == (char *)0x0)) || (*pcVar8 == '\0'))));
      *(uint *)(param_1 + 0x2c) = uVar3;
joined_r0x0084b9a4:
    } while (sVar7 != 0);
  }
  return uVar4;
}


