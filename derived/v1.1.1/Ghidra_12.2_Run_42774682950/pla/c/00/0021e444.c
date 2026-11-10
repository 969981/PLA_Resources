/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021e444; name: FUN_0021e444
 */


undefined8
FUN_0021e444(long param_1,undefined8 param_2,uint *param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  undefined8 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  char acStack_150 [256];
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar2 = *param_3;
    if (uVar2 == 0x544e4646) {
      if ((short)param_3[1] == -0x101) {
        if ((param_3[2] ^ 0x4000000) >> 0x18 != 0) {
          return 0;
        }
        if ((param_3[2] & 0xfe0000) != 0) {
          return 0;
        }
        if ((0x23 < param_3[3]) && (uVar2 = (uint)(ushort)param_3[4], 1 < (ushort)param_3[4])) {
          piVar5 = (int *)0x0;
          piVar3 = (int *)((long)param_3 + (ulong)*(ushort *)((long)param_3 + 6));
          iVar4 = *piVar3;
          if (iVar4 < 0x50414d43) goto LAB_0021e5a4;
          while (((iVar4 == 0x50414d43 || (iVar4 == 0x504c4754)) || (iVar4 == 0x52474c47))) {
            while( true ) {
              piVar3 = (int *)((long)piVar3 + (ulong)(uint)piVar3[1]);
              uVar2 = uVar2 - 1;
              if (uVar2 == 0) {
                *(uint **)(param_1 + 0x18) = param_3;
                if (piVar5 == (int *)0x0) {
                  return 0;
                }
                uVar1 = FUN_0021efc0(param_3,0x474e524b);
                FUN_0021e8f0(param_1,param_3,piVar5,uVar1,param_4,param_5,param_6);
                FUN_0021f078(param_1,param_2);
                return 1;
              }
              iVar4 = *piVar3;
              if (0x50414d42 < iVar4) break;
LAB_0021e5a4:
              if (iVar4 == 0x464e4946) {
                piVar5 = piVar3 + 2;
              }
              else if ((iVar4 != 0x474e524b) && (iVar4 != 0x48445743)) goto LAB_0021e5d8;
            }
          }
LAB_0021e5d8:
          *(uint **)(param_1 + 0x18) = param_3;
          return 0;
        }
      }
    }
    else {
      nn::util::SNPrintf(acStack_150,0x100,
                         "Signature check failed (\'%c%c%c%c\' must be \'%c%c%c%c\').",
                         (ulong)(uVar2 >> 0x18),(ulong)(uVar2 >> 0x10 & 0xff),
                         (ulong)(uVar2 >> 8 & 0xff),(ulong)(uVar2 & 0xff),0x54,0x4e,0x46,0x46);
    }
  }
  return 0;
}


