/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f2530; name: FUN_003f2530
 */


undefined8 FUN_003f2530(undefined8 param_1)

{
  int iVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  puVar2 = (ulong *)FUN_003e4700();
  if ((puVar2 != (ulong *)0x0) && (uVar4 = *puVar2, uVar4 != 0)) {
    uVar5 = 0;
    puVar6 = (undefined8 *)(puVar2[1] + 8);
    do {
      iVar1 = strcmp("grpc.security_connector",(char *)*puVar6);
      if (iVar1 == 0) {
        uVar3 = FUN_003e4830(param_1,PTR_PTR_04374110,0,0);
        return uVar3;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 4;
    } while (uVar5 < uVar4);
  }
  return 1;
}


