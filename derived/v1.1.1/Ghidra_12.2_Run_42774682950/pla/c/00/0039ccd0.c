/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0039ccd0; name: FUN_0039ccd0
 */


void FUN_0039ccd0(ulong *param_1,ulong *param_2,undefined8 *param_3,int param_4)

{
  byte *pbVar1;
  char cVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  undefined1 *__dest;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulong local_50;
  void *local_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((*param_2 & 1) == 0) {
    uVar7 = param_2[1];
    uVar5 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar7;
    *param_1 = uVar5;
    if (*(char *)((long)param_3 + 0x43) != '\0') goto LAB_0039cd18;
LAB_0039ce08:
    pbVar4 = (byte *)*param_3;
    uVar5 = *(ulong *)(pbVar4 + 8);
    pbVar1 = *(byte **)(pbVar4 + 0x10);
    if ((*pbVar4 & 1) == 0) {
      pbVar1 = pbVar4 + 1;
      uVar5 = (ulong)(*pbVar4 >> 1);
    }
                    /* try { // try from 0039ce24 to 0039ce2b has its CatchHandler @ 0039cf88 */
    FUN_002e4094(param_1,pbVar1,uVar5);
  }
  else {
    uVar5 = param_2[1];
    if (0xffffffffffffffef < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar6 = (void *)param_2[2];
    if (uVar5 < 0x17) {
      __dest = (undefined1 *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar5 << 1);
      if (uVar5 != 0) goto LAB_0039cf10;
      *__dest = 0;
      cVar2 = *(char *)((long)param_3 + 0x43);
    }
    else {
      uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
      __dest = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,uVar7);
      *param_1 = uVar7 | 1;
      param_1[1] = uVar5;
      param_1[2] = (ulong)__dest;
LAB_0039cf10:
      memcpy(__dest,pvVar6,uVar5);
      __dest[uVar5] = 0;
      cVar2 = *(char *)((long)param_3 + 0x43);
    }
    if (cVar2 == '\0') goto LAB_0039ce08;
LAB_0039cd18:
                    /* try { // try from 0039cd18 to 0039cd7f has its CatchHandler @ 0039cf88 */
    FUN_002e4094(param_1,&DAT_03979c4d,1);
    pbVar4 = (byte *)param_3[1];
    uVar5 = *(ulong *)(pbVar4 + 8);
    pbVar1 = *(byte **)(pbVar4 + 0x10);
    if ((*pbVar4 & 1) == 0) {
      pbVar1 = pbVar4 + 1;
      uVar5 = (ulong)(*pbVar4 >> 1);
    }
    FUN_002e4094(param_1,pbVar1,uVar5);
    FUN_002e4094(param_1,&DAT_039a0269,1);
  }
  if (param_4 == -1) goto LAB_0039cebc;
  FUN_002e4094(param_1,&DAT_038aa492,1);
                    /* try { // try from 0039cd8c to 0039cd97 has its CatchHandler @ 0039cf40 */
  lVar3 = FUN_00320570(param_4,auStack_78);
  uVar5 = lVar3 - (long)auStack_78;
  local_58 = 0;
  local_50 = 0;
  local_48 = (void *)0x0;
  if (0xffffffffffffffef < uVar5) {
                    /* try { // try from 0039cf30 to 0039cf37 has its CatchHandler @ 0039cf40 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar5 < 0x17) {
    local_58 = (ulong)(byte)((int)uVar5 << 1);
    pvVar6 = (void *)((ulong)&local_58 | 1);
    if (uVar5 != 0) goto LAB_0039ce5c;
  }
  else {
    uVar7 = uVar5 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar7);
    local_58 = uVar7 | 1;
    local_50 = uVar5;
    local_48 = pvVar6;
LAB_0039ce5c:
    memcpy(pvVar6,auStack_78,uVar5);
  }
  *(undefined1 *)((long)pvVar6 + uVar5) = 0;
  if ((local_58 & 1) == 0) {
    uVar5 = local_58 >> 1 & 0x7f;
    pvVar6 = (void *)((long)&local_58 + 1);
  }
  else {
    uVar5 = local_50;
    pvVar6 = local_48;
  }
                    /* try { // try from 0039ce88 to 0039ce8f has its CatchHandler @ 0039cf50 */
  FUN_002e4094(param_1,pvVar6,uVar5);
  if ((local_58 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_48);
  }
                    /* try { // try from 0039cea8 to 0039cecf has its CatchHandler @ 0039cf88 */
  FUN_002e4094(param_1,&DAT_03904308,1);
LAB_0039cebc:
  FUN_002e4094(param_1,&DAT_0389ff53,1);
  return;
}


