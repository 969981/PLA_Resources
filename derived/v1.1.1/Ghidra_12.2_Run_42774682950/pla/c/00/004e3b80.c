/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e3b80; name: FUN_004e3b80
 */


undefined8
FUN_004e3b80(long param_1,int param_2,uint param_3,undefined4 param_4,long param_5,long param_6,
            undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  ushort *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  if ((param_5 != 0) || (param_6 == 0)) {
    iVar3 = FUN_004e3cf0(param_3);
    if (param_3 >> 0x10 != 0) {
      return 0;
    }
    if (param_3 != 0x12 && iVar3 != 0) {
      return 0;
    }
    puVar1 = *(ushort **)(param_1 + 0x1e8);
    lVar4 = *(long *)(param_1 + 0x1f0);
    if (lVar4 != 0) {
      if (param_2 == 2) {
        puVar5 = puVar1;
        lVar7 = lVar4;
        do {
          if (*puVar5 == param_3) {
            if (puVar5 != (ushort *)0x0) {
              return 0;
            }
            break;
          }
          puVar5 = puVar5 + 0x1c;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      else {
        uVar2 = *puVar1;
        lVar7 = lVar4;
        puVar5 = puVar1 + 2;
        while( true ) {
          if (uVar2 == param_3) {
            if (*(int *)puVar5 == param_2) {
              return 0;
            }
            if (*(int *)puVar5 == 2) {
              return 0;
            }
          }
          lVar7 = lVar7 + -1;
          if (lVar7 == 0) break;
          uVar2 = puVar5[0x1a];
          puVar5 = puVar5 + 0x1c;
        }
      }
    }
    lVar4 = FUN_00400350(puVar1,lVar4 * 0x38 + 0x38,"external/openssl/ssl/statem/extensions_cust.c",
                         0x184);
    if (lVar4 != 0) {
      puVar6 = (undefined8 *)(lVar4 + *(long *)(param_1 + 0x1f0) * 0x38);
      *(long *)(param_1 + 0x1e8) = lVar4;
      puVar6[5] = 0;
      puVar6[4] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      *(int *)((long)puVar6 + 4) = param_2;
      *(undefined4 *)(puVar6 + 1) = param_4;
      puVar6[4] = param_7;
      puVar6[5] = param_8;
      *(short *)puVar6 = (short)param_3;
      puVar6[6] = param_9;
      puVar6[2] = param_5;
      puVar6[3] = param_6;
      *(long *)(param_1 + 0x1f0) = *(long *)(param_1 + 0x1f0) + 1;
      return 1;
    }
  }
  return 0;
}


