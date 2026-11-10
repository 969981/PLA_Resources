/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027b720; name: FUN_0027b720
 */


void FUN_0027b720(long *param_1,long param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *__s;
  long lVar4;
  
  puVar1 = PTR_DAT_04372f28;
  if (*(long *)PTR_DAT_04372f28 != 0) {
    FUN_00271640("StripeSystem is already initialized.\n");
  }
  plVar3 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x38,0x80);
  puVar2 = PTR_DAT_04372f30;
  if (plVar3 == (long *)0x0) {
    FUN_00271770("[Stripe] Memory Allocate Error!! : %d\n",0x38);
    return;
  }
  plVar3[2] = (long)param_1;
  *(undefined4 *)(plVar3 + 3) = param_3;
  *(int *)((long)plVar3 + 0x1c) = param_4;
  plVar3[6] = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[1] = param_2;
  plVar3[4] = (long)param_4 * 0x90;
  plVar3[5] = 0;
  __s = (void *)(**(code **)(*param_1 + 0x10))(param_1,(long)param_4 * 0x90,0x80);
  plVar3[6] = (long)__s;
  memset(__s,0,(long)*(int *)((long)plVar3 + 0x1c) * 0x90);
  lVar4 = plVar3[1];
  *(undefined8 *)(lVar4 + 0xf10) = 0;
  *(undefined **)(lVar4 + 0xf18) = PTR_FUN_04372f38;
  *(undefined **)(lVar4 + 0xf20) = PTR_LAB_04372f40;
  *(undefined **)(lVar4 + 0xf30) = PTR_LAB_04372f48;
  *(undefined **)(lVar4 + 0xf38) = PTR_LAB_04372f50;
  *(undefined **)(lVar4 + 0xf40) = PTR_LAB_04372f58;
  *(undefined **)(lVar4 + 0xf48) = PTR_LAB_04372f60;
  *(undefined **)(lVar4 + 0xf50) = PTR_LAB_04372f68;
  *(undefined **)(lVar4 + 0xf58) = PTR_LAB_04372f70;
  puVar2 = PTR_LAB_04372f78;
  *(undefined8 *)(lVar4 + 0xf28) = 0;
  *(undefined **)(lVar4 + 0xf60) = puVar2;
  *(long **)puVar1 = plVar3;
  return;
}


