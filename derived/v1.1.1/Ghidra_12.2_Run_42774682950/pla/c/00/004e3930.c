/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e3930; name: FUN_004e3930
 */


void FUN_004e3930(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar2 = *param_1;
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    lVar5 = 0;
    puVar4 = *(undefined1 **)(lVar2 + 0x10);
    puVar1 = (undefined8 *)(lVar2 + 0x30);
    do {
      if (puVar4 == &LAB_004e3900) {
        FUN_00400420(puVar1[-2],"external/openssl/ssl/statem/extensions_cust.c",0x149);
        FUN_00400420(*puVar1,"external/openssl/ssl/statem/extensions_cust.c",0x14a);
        uVar3 = param_1[1];
        if (uVar3 <= lVar5 + 1U) goto LAB_004e39c8;
      }
      else if (uVar3 <= lVar5 + 1U) goto LAB_004e39c8;
      lVar5 = lVar5 + 1;
      puVar4 = (undefined1 *)puVar1[3];
      puVar1 = puVar1 + 7;
    } while( true );
  }
LAB_004e39cc:
  FUN_00400420(lVar2,"external/openssl/ssl/statem/extensions_cust.c",0x14c);
  return;
LAB_004e39c8:
  lVar2 = *param_1;
  goto LAB_004e39cc;
}


