/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e3720; name: FUN_004e3720
 */


undefined8 FUN_004e3720(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_2[1] != 0) {
    lVar2 = FUN_00405020(*param_2,param_2[1] * 0x38,"external/openssl/ssl/statem/extensions_cust.c",
                         0x116);
    *param_1 = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    param_1[1] = param_2[1];
    uVar6 = param_2[1];
    if (uVar6 != 0) {
      lVar8 = 0;
      bVar5 = false;
      uVar9 = 1;
      while( true ) {
        lVar4 = *param_2 + lVar8;
        if (*(undefined1 **)(lVar4 + 0x10) == &LAB_004e3900) {
          if (bVar5) {
            *(undefined8 *)(lVar2 + lVar8 + 0x20) = 0;
            *(undefined8 *)(lVar2 + lVar8 + 0x30) = 0;
          }
          else {
            uVar3 = FUN_00405020(*(undefined8 *)(lVar4 + 0x20),0x18,
                                 "external/openssl/ssl/statem/extensions_cust.c",0x12e);
            lVar2 = lVar2 + lVar8;
            *(undefined8 *)(lVar2 + 0x20) = uVar3;
            lVar4 = FUN_00405020(*(undefined8 *)(lVar4 + 0x30),0x10,
                                 "external/openssl/ssl/statem/extensions_cust.c",0x130);
            *(long *)(lVar2 + 0x30) = lVar4;
            bVar5 = lVar4 == 0 || *(long *)(lVar2 + 0x20) == 0;
            uVar6 = param_2[1];
          }
        }
        if (uVar6 <= uVar9) break;
        lVar2 = *param_1;
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x38;
      }
      if (bVar5) {
        lVar2 = *param_1;
        uVar6 = param_1[1];
        if (uVar6 != 0) {
          lVar8 = 0;
          puVar7 = *(undefined1 **)(lVar2 + 0x10);
          puVar1 = (undefined8 *)(lVar2 + 0x30);
          do {
            if (puVar7 == &LAB_004e3900) {
              FUN_00400420(puVar1[-2],"external/openssl/ssl/statem/extensions_cust.c",0x149);
              FUN_00400420(*puVar1,"external/openssl/ssl/statem/extensions_cust.c",0x14a);
              uVar6 = param_1[1];
              if (uVar6 <= lVar8 + 1U) goto LAB_004e38c0;
            }
            else if (uVar6 <= lVar8 + 1U) goto LAB_004e38c0;
            lVar8 = lVar8 + 1;
            puVar7 = (undefined1 *)puVar1[3];
            puVar1 = puVar1 + 7;
          } while( true );
        }
        goto LAB_004e38c4;
      }
    }
  }
  return 1;
LAB_004e38c0:
  lVar2 = *param_1;
LAB_004e38c4:
  FUN_00400420(lVar2,"external/openssl/ssl/statem/extensions_cust.c",0x14c);
  return 0;
}


