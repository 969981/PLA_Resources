/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00580d68; name: FUN_00580d68
 */


long FUN_00580d68(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *local_18;
  
  if (((DAT_0439ee18 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0439ee18), iVar2 != 0)) {
                    /* try { // try from 00580da4 to 00580dbb has its CatchHandler @ 00580e38 */
    lVar3 = FUN_005815cc(&DAT_038ef8a9);
    FUN_00581f1c(&local_18);
    puVar1 = local_18;
    local_18 = (undefined8 *)0x0;
    puVar4 = *(undefined8 **)(lVar3 + 0x18);
    *(undefined8 **)(lVar3 + 0x18) = puVar1;
    if (puVar4 == (undefined8 *)0x0) {
      local_18 = (undefined8 *)0x0;
    }
    else {
      (**(code **)*puVar4)(puVar4);
      FUN_002e2ea0(PTR_LAB_04373088,puVar4);
      puVar1 = local_18;
      local_18 = (undefined8 *)0x0;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1);
        FUN_002e2ea0(PTR_LAB_04373088,puVar1);
      }
    }
    DAT_0439ee10 = lVar3;
    __cxa_guard_release(&DAT_0439ee18);
  }
  return DAT_0439ee10;
}


