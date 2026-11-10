/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0028a550; name: FUN_0028a550
 */


void FUN_0028a550(long *param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  
  puVar2 = PTR_DAT_04373008;
  if (*(long *)PTR_DAT_04373008 != 0) {
    FUN_00271640("ConnectionStripeSystem is already initialized.\n");
  }
  plVar4 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x30,0x80);
  puVar1 = PTR_DAT_04373010;
  if (plVar4 == (long *)0x0) {
    FUN_00271770("[ConnectedStripe] Memory Allocate Error!! : %d\n",0x30);
    return;
  }
  *(undefined4 *)(plVar4 + 4) = param_3;
  plVar4[5] = 0;
  puVar3 = PTR_FUN_04373018;
  plVar4[2] = 0x3f8000003f800000;
  plVar4[3] = param_2;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[1] = 0x3f8000003f800000;
  *(undefined8 *)(param_2 + 0xeb8) = 0;
  *(undefined **)(param_2 + 0xec0) = puVar3;
  *(undefined8 *)(param_2 + 0xed0) = 0;
  puVar1 = PTR_LAB_04373020;
  *(undefined8 *)(param_2 + 0xec8) = 0;
  puVar3 = PTR_LAB_04373028;
  *(undefined **)(param_2 + 0xed8) = puVar1;
  puVar1 = PTR_LAB_04373030;
  *(undefined **)(param_2 + 0xee0) = puVar3;
  *(undefined **)(param_2 + 0xee8) = puVar1;
  *(undefined8 *)(param_2 + 0xf00) = 0;
  *(undefined8 *)(param_2 + 0xef8) = 0;
  puVar1 = PTR_LAB_04372f78;
  *(undefined8 *)(param_2 + 0xef0) = 0;
  *(undefined **)(param_2 + 0xf08) = puVar1;
  *(long **)puVar2 = plVar4;
  return;
}


