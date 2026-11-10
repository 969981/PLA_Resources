/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00536668; name: FUN_00536668
 */


void FUN_00536668(long param_1,long param_2,int param_3,undefined8 *param_4,undefined8 *param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  char **ppcVar5;
  char *__s2;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  char **local_78;
  char *local_70;
  long local_68;
  undefined1 auStack_60 [8];
  char **local_58;
  
  __s2 = (char *)*param_4;
  plVar7 = (long *)(param_1 + 8);
  plVar8 = (long *)*plVar7;
  local_68 = param_2;
  if (plVar8 != (long *)0x0) {
    plVar6 = plVar7;
    do {
      iVar1 = strcmp((char *)plVar8[4],__s2);
      if (iVar1 >= 0) {
        plVar6 = plVar8;
      }
      plVar8 = (long *)plVar8[iVar1 < 0];
    } while (plVar8 != (long *)0x0);
    if ((plVar6 != plVar7) && (iVar1 = strcmp(__s2,(char *)plVar6[4]), -1 < iVar1)) {
      lVar2 = plVar6[5];
      goto LAB_00536744;
    }
  }
  local_70 = __s2;
  lVar2 = FUN_00539df8(&local_68,param_4,param_2 + 0xbc);
  local_58 = &local_70;
                    /* try { // try from 00536704 to 0053671f has its CatchHandler @ 005367c8 */
  lVar3 = FUN_0053a3fc(param_1,&local_70,&DAT_03a2b0de,&local_58,auStack_60);
  puVar4 = *(undefined8 **)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = lVar2;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 00536738 to 0053673b has its CatchHandler @ 005367c4 */
    (**(code **)*puVar4)();
  }
LAB_00536744:
  local_78 = (char **)*param_5;
  *param_5 = 0;
  ppcVar5 = local_78;
  if (*(int *)(lVar2 + 0x40) != param_3) {
                    /* try { // try from 00536764 to 0053676b has its CatchHandler @ 005367b0 */
    FUN_005393f4(&local_78,lVar2 + 0x28);
    ppcVar5 = local_78;
  }
  local_78 = (char **)0x0;
  local_58 = ppcVar5;
  FUN_00536558(lVar2 + 0x48,&local_58);
  FUN_005318f8(&local_58);
  FUN_005318f8(&local_78);
  return;
}


