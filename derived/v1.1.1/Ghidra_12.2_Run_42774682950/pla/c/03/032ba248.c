/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ba248; name: FUN_032ba248
 */


void FUN_032ba248(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  ThreadType *pTVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  
  plVar4 = (long *)FUN_032cf5b0(0x250);
  FUN_032ba3d4(plVar4,param_3,param_2);
  uVar7 = param_2[1];
  if (uVar7 == 0) {
    uVar7 = 0x20000;
  }
  lVar2 = tpidr_el0;
  lVar6 = *(long *)(lVar2 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar6;
  }
  pvVar5 = (void *)FUN_032cf7a8(*(undefined8 *)(*(long *)(lVar6 + 8) + 0x58),(long)(int)uVar7,0x1000
                               );
  plVar4[0x47] = (long)pvVar5;
  pTVar1 = (ThreadType *)(plVar4 + 0xf);
  if (*(uint *)(param_2 + 2) < 5) {
    iVar3 = *(int *)(&DAT_039c3384 + (long)(int)*(uint *)(param_2 + 2) * 4);
  }
  else {
    iVar3 = 0x10;
  }
  iVar3 = nn::os::CreateThread
                    (pTVar1,(_func_void_void_ptr *)&LAB_032ba3a4,plVar4,pvVar5,uVar7,iVar3);
  if (iVar3 != 0) {
    *param_1 = 0;
                    /* WARNING: Could not recover jumptable at 0x032ba378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 8))(plVar4);
    return;
  }
  *(undefined1 *)((long)plVar4 + 0x24c) = 1;
  if (*param_2 != 0) {
    nn::os::SetThreadNamePointer(pTVar1,(char *)(plVar4[0xd] & 0xfffffffffffffffe));
  }
  plVar4[0x48] = param_2[3];
  FUN_032ba1b8(plVar4);
  plVar4[1] = (long)pTVar1;
  nn::os::StartThread(pTVar1);
  *param_1 = plVar4;
  return;
}


