/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e42d94; name: FUN_02e42d94
 */


undefined8 FUN_02e42d94(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (DAT_04409ad0 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)(*DAT_0442d138)(9,0x48);
    DAT_04409ad0 = puVar1;
    if (puVar1 == (undefined8 *)0x0) {
      uVar2 = 1;
    }
    else {
      puVar1[7] = 0;
      puVar1[8] = 0;
      uVar2 = 1;
      puVar1[6] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      nn::os::InitializeMutex((MutexType *)(puVar1 + 5),true,0);
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}


