/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053f6d0; name: FUN_0053f6d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0053f6d0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *(undefined1 *)(param_1 + 2) = 2;
  uVar1 = _DAT_03889090;
  param_1[1] = _UNK_03889098;
  *param_1 = uVar1;
  if (param_3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("alloc","external/upb\\upb/upb.h",0x59,"upb_malloc");
  }
  puVar2 = (undefined8 *)(*(code *)*param_3)(param_3,0,0,0x60);
  param_1[3] = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  puVar2[9] = 0;
  puVar2[8] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[5] = 0;
  puVar2[4] = 0;
  puVar2[7] = 0;
  puVar2[6] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  return 1;
}


