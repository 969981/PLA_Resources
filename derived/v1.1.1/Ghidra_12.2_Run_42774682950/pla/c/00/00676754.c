/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00676754; name: FUN_00676754
 */


void FUN_00676754(ulong *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  ulong *puVar3;
  long *plVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  void *__src;
  void *__dest;
  ulong uVar8;
  
  puVar3 = (ulong *)FUN_0065450c(param_2);
  plVar4 = (long *)FUN_00612290();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (ulong)plVar4;
  if ((*puVar3 & 1) == 0) {
    uVar8 = puVar3[1];
    uVar7 = *puVar3;
    param_1[2] = puVar3[2];
    param_1[1] = uVar8;
    *param_1 = uVar7;
  }
  else {
    uVar7 = puVar3[1];
    if (0xffffffffffffffef < uVar7) {
                    /* try { // try from 00676964 to 0067696b has its CatchHandler @ 0067696c */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    __src = (void *)puVar3[2];
    if (uVar7 < 0x17) {
      __dest = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar7 << 1);
      if (uVar7 != 0) goto LAB_006767f8;
    }
    else {
      uVar8 = uVar7 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,uVar8,1);
      *param_1 = uVar8 | 1;
      param_1[1] = uVar7;
      param_1[2] = (ulong)__dest;
LAB_006767f8:
      memcpy(__dest,__src,uVar7);
    }
    *(undefined1 *)((long)__dest + uVar7) = 0;
  }
  FUN_00654534(param_1 + 4,param_2,&DAT_038d29f1);
  FUN_00654534(param_1 + 8,param_2,"susid");
                    /* try { // try from 0067683c to 0067685f has its CatchHandler @ 00676970 */
  uVar2 = FUN_00654518(param_2,"sussid");
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar2 = FUN_00654518(param_2,"suscid");
  *(undefined4 *)((long)param_1 + 100) = uVar2;
  FUN_00654574(param_1 + 0xd,param_2,&DAT_03938f56);
  FUN_006545b4(param_1 + 0x11,param_2,&DAT_038fb7da);
  *(undefined4 *)(param_1 + 0x12) = 0;
  pbVar5 = (byte *)FUN_00654504(param_2);
  bVar1 = *pbVar5;
  uVar7 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar7 = *(ulong *)(pbVar5 + 8);
  }
  if (uVar7 == 5) {
    pbVar6 = *(byte **)(pbVar5 + 0x10);
    if ((bVar1 & 1) == 0) {
      pbVar6 = pbVar5 + 1;
    }
    if (*(int *)pbVar6 == 0x74735f5f && pbVar6[4] == 0x75) {
      uVar2 = 1;
      goto LAB_0067694c;
    }
  }
  pbVar5 = (byte *)FUN_00654504(param_2);
  bVar1 = *pbVar5;
  uVar7 = (ulong)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    uVar7 = *(ulong *)(pbVar5 + 8);
  }
  if (uVar7 == 5) {
    pbVar6 = *(byte **)(pbVar5 + 0x10);
    if ((bVar1 & 1) == 0) {
      pbVar6 = pbVar5 + 1;
    }
    if (*(int *)pbVar6 == 0x74735f5f && pbVar6[4] == 0x67) {
      uVar2 = 2;
      goto LAB_0067694c;
    }
  }
  uVar2 = 0;
LAB_0067694c:
  *(undefined4 *)(param_1 + 0x12) = uVar2;
  return;
}


