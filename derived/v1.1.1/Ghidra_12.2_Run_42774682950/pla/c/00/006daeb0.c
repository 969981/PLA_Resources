/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006daeb0; name: FUN_006daeb0
 */


void FUN_006daeb0(ulong *param_1,long *param_2,char *param_3)

{
  int iVar1;
  byte bVar2;
  size_t __n;
  long *plVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  void *pvVar7;
  ulong uVar8;
  long lVar9;
  ulong local_78;
  size_t local_70;
  void *local_68;
  long local_60 [4];
  ulong *local_38;
  
  lVar9 = *param_2;
  if (lVar9 == 0) goto LAB_006dafc8;
  local_78 = 0;
  local_70 = 0;
  local_68 = (void *)0x0;
  __n = strlen(param_3);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 006db094 to 006db09b has its CatchHandler @ 006db0a8 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_78 = CONCAT71(local_78._1_7_,(char)((int)__n << 1));
    pvVar7 = (void *)((ulong)&local_78 | 1);
    if (__n != 0) goto LAB_006daf38;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar7 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
    local_78 = uVar6 | 1;
    local_70 = __n;
    local_68 = pvVar7;
LAB_006daf38:
    memcpy(pvVar7,param_3,__n);
  }
  *(undefined1 *)((long)pvVar7 + __n) = 0;
  local_38 = &local_78;
                    /* try { // try from 006daf58 to 006daf67 has its CatchHandler @ 006db0b4 */
  FUN_006342a8(local_60,*(undefined8 *)(lVar9 + 0x20),&local_38,0);
  if ((local_78 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_68);
  }
  if (local_60[0] == 0) {
LAB_006dafc8:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar6 = FUN_00612290();
    param_1[2] = 0;
    param_1[3] = uVar6;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  lVar9 = *(long *)(local_60[0] + 8);
  iVar1 = *(int *)(lVar9 + 0x34);
  if (iVar1 == 8) {
    pbVar5 = *(byte **)(lVar9 + 0x28);
    if ((*pbVar5 & 1) != 0) goto LAB_006dafa4;
LAB_006daff0:
    pbVar5 = pbVar5 + 1;
    if (iVar1 == 8) goto LAB_006daffc;
LAB_006dafb0:
    bVar2 = *PTR_DAT_043730c0;
    pbVar4 = PTR_DAT_043730c0;
    if ((bVar2 & 1) != 0) goto LAB_006dafc0;
LAB_006db008:
    uVar6 = (ulong)(bVar2 >> 1);
  }
  else {
    pbVar5 = PTR_DAT_043730c0;
    if ((*PTR_DAT_043730c0 & 1) == 0) goto LAB_006daff0;
LAB_006dafa4:
    pbVar5 = *(byte **)(pbVar5 + 0x10);
    if (iVar1 != 8) goto LAB_006dafb0;
LAB_006daffc:
    pbVar4 = *(byte **)(lVar9 + 0x28);
    bVar2 = *pbVar4;
    if ((bVar2 & 1) == 0) goto LAB_006db008;
LAB_006dafc0:
    uVar6 = *(ulong *)(pbVar4 + 8);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  plVar3 = (long *)FUN_00612290();
  param_1[3] = (ulong)plVar3;
  if (0xffffffffffffffef < uVar6) {
                    /* try { // try from 006db09c to 006db0a3 has its CatchHandler @ 006db0a4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar6 < 0x17) {
    pvVar7 = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar6 << 1);
    if (uVar6 == 0) goto LAB_006db078;
  }
  else {
    uVar8 = uVar6 + 0x10 & 0xfffffffffffffff0;
    pvVar7 = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar8,1);
    param_1[1] = uVar6;
    param_1[2] = (ulong)pvVar7;
    *param_1 = uVar8 | 1;
  }
  memcpy(pvVar7,pbVar5,uVar6);
LAB_006db078:
  *(undefined1 *)((long)pvVar7 + uVar6) = 0;
  return;
}


