/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f5ab0; name: FUN_002f5ab0
 */


void FUN_002f5ab0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_0438f7f0;
  if (DAT_0438f7f0 != &DAT_0438f7e8) {
    do {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/iomgr.cc",0x57,0,
                   "%s OBJECT: %s %p","LEAKED",*puVar2,puVar2);
      puVar1 = puVar2 + 1;
      puVar2 = (undefined8 *)*puVar1;
    } while ((undefined8 *)*puVar1 != &DAT_0438f7e8);
  }
  return;
}


