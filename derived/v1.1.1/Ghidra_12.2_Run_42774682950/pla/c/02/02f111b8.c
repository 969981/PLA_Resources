/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f111b8; name: FUN_02f111b8
 */


void FUN_02f111b8(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  nn::os::LockMutex((MutexType *)&DAT_0440ad90);
  if (DAT_0440ad78 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_02f59e30(0,0x20);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = DAT_0440ad78;
      DAT_0440ad78 = puVar1;
      goto LAB_02f111f4;
    }
    FUN_02f112d8();
    if (DAT_0440ad78 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)FUN_02f59e30(0,0x20);
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)0x0;
        goto LAB_02f11234;
      }
      *puVar1 = DAT_0440ad78;
      DAT_0440ad78 = puVar1;
    }
    if (DAT_0440ad70 == (undefined8 *)0x0) goto LAB_02f112a4;
    *DAT_0440ad70 = DAT_0440ad78;
  }
  else {
LAB_02f111f4:
    if (DAT_0440ad70 == (undefined8 *)0x0) {
LAB_02f112a4:
      DAT_0440ad68 = DAT_0440ad78;
    }
    else {
      *DAT_0440ad70 = DAT_0440ad78;
    }
  }
  DAT_0440ad70 = DAT_0440ad78;
  puVar1 = (undefined8 *)*DAT_0440ad78;
  *DAT_0440ad78 = 0;
  DAT_0440ad78 = puVar1;
  DAT_0440ad8c = DAT_0440ad8c + 1;
  puVar1 = DAT_0440ad70 + 1;
LAB_02f11234:
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 1) = param_3;
  *(undefined4 *)((long)puVar1 + 0xc) = param_4;
  *(undefined4 *)(puVar1 + 2) = param_1;
  nn::os::UnlockMutex((MutexType *)&DAT_0440ad90);
  return;
}


