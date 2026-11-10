/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006daca0; name: FUN_006daca0
 */


void FUN_006daca0(ulong *param_1,long *param_2,char *param_3)

{
  size_t sVar1;
  long *plVar2;
  byte *pbVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  ulong local_78;
  size_t local_70;
  void *local_68;
  long local_60 [4];
  ulong *local_38;
  
  lVar6 = *param_2;
  if (lVar6 == 0) goto LAB_006dad9c;
  local_78 = 0;
  local_70 = 0;
  local_68 = (void *)0x0;
  sVar1 = strlen(param_3);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 006dae64 to 006dae6b has its CatchHandler @ 006dae78 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    local_78 = CONCAT71(local_78._1_7_,(char)((int)sVar1 << 1));
    pvVar4 = (void *)((ulong)&local_78 | 1);
    if (sVar1 != 0) goto LAB_006dad28;
  }
  else {
    uVar5 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
    local_78 = uVar5 | 1;
    local_70 = sVar1;
    local_68 = pvVar4;
LAB_006dad28:
    memcpy(pvVar4,param_3,sVar1);
  }
  *(undefined1 *)((long)pvVar4 + sVar1) = 0;
  local_38 = &local_78;
                    /* try { // try from 006dad48 to 006dad57 has its CatchHandler @ 006dae84 */
  FUN_006342a8(local_60,*(undefined8 *)(lVar6 + 0x20),&local_38,0);
  if ((local_78 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_68);
  }
  if (local_60[0] == 0) {
LAB_006dad9c:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar5 = FUN_00612290();
    param_1[2] = 0;
    param_1[3] = uVar5;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (*(int *)(*(long *)(local_60[0] + 8) + 0x34) == 7) {
    pbVar3 = *(byte **)(*(long *)(local_60[0] + 8) + 0x28);
    if ((*pbVar3 & 1) != 0) goto LAB_006dad94;
LAB_006dadc4:
    pbVar3 = pbVar3 + 1;
  }
  else {
    pbVar3 = PTR_DAT_043730c0;
    if ((*PTR_DAT_043730c0 & 1) == 0) goto LAB_006dadc4;
LAB_006dad94:
    pbVar3 = *(byte **)(pbVar3 + 0x10);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar2 = (long *)FUN_00612290();
  param_1[3] = (ulong)plVar2;
  sVar1 = strlen((char *)pbVar3);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 006dae6c to 006dae73 has its CatchHandler @ 006dae74 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pvVar4 = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)sVar1 << 1);
    if (sVar1 == 0) goto LAB_006dae48;
  }
  else {
    uVar5 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar5,1);
    param_1[1] = sVar1;
    param_1[2] = (ulong)pvVar4;
    *param_1 = uVar5 | 1;
  }
  memcpy(pvVar4,pbVar3,sVar1);
LAB_006dae48:
  *(undefined1 *)((long)pvVar4 + sVar1) = 0;
  return;
}


