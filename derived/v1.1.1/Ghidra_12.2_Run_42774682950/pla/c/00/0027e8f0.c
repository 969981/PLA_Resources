/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027e8f0; name: FUN_0027e8f0
 */


void FUN_0027e8f0(long *param_1,long param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *__s;
  long lVar4;
  
  puVar2 = PTR_DAT_04372f80;
  if (*(long *)PTR_DAT_04372f80 != 0) {
    FUN_00271640("SuperStripeSystem is already initialized.\n");
  }
  plVar3 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x38,0x80);
  puVar1 = PTR_DAT_04372f88;
  if (plVar3 == (long *)0x0) {
    FUN_00271770("[SuperStripe] Memory Allocate Error!! : %d\n",0x38);
    return;
  }
  plVar3[2] = (long)param_1;
  *(undefined4 *)(plVar3 + 3) = param_3;
  *(int *)((long)plVar3 + 0x1c) = param_4;
  plVar3[6] = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[1] = param_2;
  plVar3[4] = (long)param_4 * 0xa0;
  plVar3[5] = 0;
  __s = (void *)(**(code **)(*param_1 + 0x10))(param_1,(long)param_4 * 0xa0,0x80);
  plVar3[6] = (long)__s;
  memset(__s,0,(long)*(int *)((long)plVar3 + 0x1c) * 0xa0);
  lVar4 = plVar3[1];
  *(undefined8 *)(lVar4 + 0xf68) = 0;
  *(undefined **)(lVar4 + 0xf70) = PTR_LAB_04372f90;
  *(undefined **)(lVar4 + 0xf78) = PTR_LAB_04372f98;
  *(undefined **)(lVar4 + 0xf88) = PTR_LAB_04372fa0;
  *(undefined **)(lVar4 + 0xf90) = PTR_LAB_04372fa8;
  *(undefined **)(lVar4 + 0xf98) = PTR_LAB_04372fb0;
  *(undefined **)(lVar4 + 4000) = PTR_LAB_04372fb8;
  *(undefined **)(lVar4 + 0xfa8) = PTR_LAB_04372fc0;
  *(undefined **)(lVar4 + 0xfb0) = PTR_LAB_04372fc8;
  puVar1 = PTR_LAB_04372f78;
  *(undefined8 *)(lVar4 + 0xf80) = 0;
  *(undefined **)(lVar4 + 0xfb8) = puVar1;
  *(long **)puVar2 = plVar3;
  return;
}


