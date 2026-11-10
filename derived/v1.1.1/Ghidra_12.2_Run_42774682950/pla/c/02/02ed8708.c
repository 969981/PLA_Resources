/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed8708; name: FUN_02ed8708
 */


void FUN_02ed8708(long param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  if (param_2 == 0) {
    plVar5 = (long *)(param_1 + 0x58);
    lVar7 = *plVar5;
    if ((lVar7 != 0) && (pbVar8 = *(byte **)(lVar7 + 0x18), pbVar8 != (byte *)0x0)) {
      uVar6 = 0;
      pbVar9 = pbVar8 + ((ulong)(*pbVar8 + 4) & 0x1fc) + 8;
      do {
        if (pbVar8[uVar6 + 1] == 0xb) {
          if ((*(float *)(pbVar9 + -8) == 1.0) && (*(long *)pbVar9 == 0)) {
            return;
          }
          param_1 = FUN_02ef3758(DAT_0440a140,param_1);
          lVar7 = *plVar5;
          goto joined_r0x02ed87d8;
        }
        uVar6 = uVar6 + 1;
        pbVar9 = pbVar9 + 0x10;
      } while (uVar6 < *pbVar8);
    }
  }
  else {
    plVar5 = *(long **)(param_1 + 0x60);
    if (plVar5 != (long *)0x0) {
      plVar4 = (long *)*plVar5;
      uVar2 = *(uint *)(plVar5 + 1);
      if ((uVar2 == 0) || (*plVar4 == param_2)) {
        plVar5 = plVar4;
      }
      else {
        lVar7 = (ulong)uVar2 * 0x10;
        plVar3 = plVar4;
        do {
          lVar7 = lVar7 + -0x10;
          if (lVar7 == 0) {
            return;
          }
          plVar1 = plVar3 + 2;
          plVar5 = plVar3 + 2;
          plVar3 = plVar3 + 2;
        } while (*plVar1 != param_2);
      }
      if (plVar5 != plVar4 + (ulong)uVar2 * 2) {
        lVar7 = plVar5[1];
joined_r0x02ed87d8:
        if (lVar7 != 0) {
          FUN_02ed6050(0x3f800000,param_1,lVar7,param_3,param_4);
          return;
        }
      }
    }
  }
  return;
}


