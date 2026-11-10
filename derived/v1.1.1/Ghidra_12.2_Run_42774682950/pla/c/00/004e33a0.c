/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e33a0; name: FUN_004e33a0
 */


undefined8
FUN_004e33a0(long param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ushort *puVar6;
  undefined4 local_44;
  
  lVar5 = *(long *)(param_1 + 0x488);
  if ((param_2 & 0x180) == 0) {
    uVar4 = 2;
    lVar3 = *(long *)(lVar5 + 0x1f0);
  }
  else {
    uVar4 = (uint)(*(int *)(param_1 + 0x38) != 0);
    lVar3 = *(long *)(lVar5 + 0x1f0);
  }
  if (lVar3 != 0) {
    puVar6 = *(ushort **)(lVar5 + 0x1e8);
    if (uVar4 == 2) {
      do {
        if (*puVar6 == param_3) {
          if (puVar6 == (ushort *)0x0) {
            return 1;
          }
LAB_004e3460:
          iVar1 = FUN_004e3eb0(param_1,*(undefined4 *)(puVar6 + 4),param_2);
          if (iVar1 == 0) {
            return 1;
          }
          if (((param_2 & 0x700) == 0) || (((byte)puVar6[6] >> 1 & 1) != 0)) {
            if ((param_2 >> 7 & 1) != 0) {
              *(uint *)(puVar6 + 6) = *(uint *)(puVar6 + 6) | 1;
            }
            if (*(code **)(puVar6 + 0x14) == (code *)0x0) {
              return 1;
            }
            iVar1 = (**(code **)(puVar6 + 0x14))
                              (param_1,param_3,param_2,param_4,param_5,param_6,param_7,&local_44,
                               *(undefined8 *)(puVar6 + 0x18));
            if (0 < iVar1) {
              return 1;
            }
            uVar2 = 0xa2;
          }
          else {
            local_44 = 0x6e;
            uVar2 = 0x8f;
          }
          FUN_004c99a0(param_1,local_44,0x22b,0x6e,"external/openssl/ssl/statem/extensions_cust.c",
                       uVar2);
          return 0;
        }
        puVar6 = puVar6 + 0x1c;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    else {
      do {
        if ((*puVar6 == param_3) &&
           ((*(uint *)(puVar6 + 2) == uVar4 || (*(uint *)(puVar6 + 2) == 2)))) goto LAB_004e3460;
        puVar6 = puVar6 + 0x1c;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  return 1;
}


