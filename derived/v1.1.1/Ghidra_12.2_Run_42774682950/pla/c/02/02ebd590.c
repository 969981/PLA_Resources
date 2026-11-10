/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebd590; name: FUN_02ebd590
 */


void FUN_02ebd590(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 1) != 0) {
      lVar2 = (ulong)*(uint *)(param_1 + 1) * 0x30;
      do {
        (**(code **)*puVar1)(puVar1);
        lVar2 = lVar2 + -0x30;
        puVar1 = puVar1 + 6;
      } while (lVar2 != 0);
      puVar1 = (undefined8 *)*param_1;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    (*DAT_0442d150)(0,puVar1);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


