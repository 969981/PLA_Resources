/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ea2c8c; name: FUN_01ea2c8c
 */


bool FUN_01ea2c8c(undefined8 param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  long *plVar5;
  undefined1 *puVar6;
  
  if (param_2 == 0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar6 = *(undefined1 **)PTR_DAT_0437a0d8;
    plVar5 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
LAB_01ea2cc0:
    if (puVar6 == (undefined1 *)0x3dd19bc2820b81b8) {
      bVar2 = false;
      goto joined_r0x01ea2dac;
    }
  }
  else {
    bVar1 = *(byte *)(param_2 + 4);
    puVar6 = &DAT_cbf29ce484222645;
    if (bVar1 != 0) {
      plVar5 = (long *)0x0;
      pbVar4 = (byte *)(param_2 + 5);
      do {
        puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar1) * 0x100000001b3);
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
      goto LAB_01ea2cc0;
    }
    plVar5 = (long *)0x0;
  }
  bVar2 = puVar6 == (undefined1 *)0xf644afd9efa28ae5;
joined_r0x01ea2dac:
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  return bVar2;
}


