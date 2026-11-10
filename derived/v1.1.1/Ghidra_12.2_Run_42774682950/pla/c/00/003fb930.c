/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fb930; name: FUN_003fb930
 */


undefined4 FUN_003fb930(undefined8 *param_1,ushort param_2,ulong *param_3,long *param_4)

{
  size_t sVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  *param_3 = 0;
  *param_4 = 0;
  if (param_2 == 0) {
    uVar3 = 2;
  }
  else {
    lVar4 = 0;
    uVar5 = (ulong)param_2;
    puVar6 = param_1;
    do {
      if ((char *)*puVar6 == (char *)0x0) {
        sVar1 = 0;
LAB_003fba10:
        FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x360,2,
                     "Invalid protocol name length: %d.",sVar1);
        return 2;
      }
      sVar1 = strlen((char *)*puVar6);
      if (0xfe < sVar1 - 1) goto LAB_003fba10;
      lVar4 = sVar1 + lVar4 + 1;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - 1;
      *param_4 = lVar4;
    } while (uVar5 != 0);
    puVar2 = (undefined1 *)FUN_002ebd50(lVar4);
    *param_3 = (ulong)puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      uVar3 = 0xc;
    }
    else {
      uVar5 = (ulong)param_2;
      do {
        sVar1 = strlen((char *)*param_1);
        *puVar2 = (char)sVar1;
        memcpy(puVar2 + 1,(void *)*param_1,sVar1);
        puVar2 = puVar2 + 1 + sVar1;
        uVar5 = uVar5 - 1;
        param_1 = param_1 + 1;
      } while (uVar5 != 0);
      uVar3 = 7;
      if ((undefined1 *)*param_3 <= puVar2) {
        uVar3 = 0;
        if ((long)puVar2 - (long)*param_3 != *param_4) {
          uVar3 = 7;
        }
        return uVar3;
      }
    }
  }
  return uVar3;
}


