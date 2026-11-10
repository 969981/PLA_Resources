/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2fc8c; name: FUN_02f2fc8c
 */


void FUN_02f2fc8c(long param_1,undefined8 param_2)

{
  int iVar1;
  long in_x5;
  
  *(undefined8 *)(param_1 + 0xe4) = 0x2b;
  *(undefined8 *)(param_1 + 0xb4) = 0x2b;
  *(undefined8 *)(param_1 + 0x98) = param_2;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xc4) = 0x3f800000ffffffff;
  *(undefined8 *)(param_1 + 0xcc) = 0x1ffffffff;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0x3f800000ffffffff;
  *(undefined8 *)(param_1 + 0xfc) = 0x1ffffffff;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0x3f8000003f800000;
  iVar1 = FUN_02f2f53c();
  if ((iVar1 == 1) &&
     (iVar1 = (**(code **)(**(long **)(param_1 + 0x98) + 0x38))
                        (*(long **)(param_1 + 0x98),&PTR_PTR_042a9250,
                         *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),in_x5),
     iVar1 == 1)) {
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(in_x5 + 4);
    (**(code **)(**(long **)(param_1 + 0x98) + 0x18))();
  }
  return;
}


