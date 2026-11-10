/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00563188; name: FUN_00563188
 */


void FUN_00563188(char *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  ostream *this;
  char *pcVar6;
  long lVar7;
  undefined8 *__dest;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auStack_170 [8];
  ostream aoStack_168 [256];
  long local_68 [5];
  
  uVar9 = 0;
  cVar3 = *param_1;
  while (cVar3 == '\x05') {
    if (uVar9 < 4) {
      local_68[uVar9 + 1] = (long)param_1;
      uVar9 = uVar9 + 1;
    }
    pcVar6 = param_1 + 8;
    if (1 < *(ushort *)(param_1 + 6)) {
      pcVar6 = *(char **)pcVar6;
    }
    param_1 = *(char **)pcVar6;
    cVar3 = *param_1;
  }
  if (cVar3 != '\x03') {
    if (cVar3 != '\x04') goto joined_r0x00563344;
    iVar1 = *(int *)(param_1 + 0x18);
    uVar5 = iVar1 - param_2;
    if (uVar5 != 0 && param_2 <= iVar1) {
      if (iVar1 + -1 == param_2) {
        lVar7 = *(long *)(param_1 + 0x20);
        uVar2 = *(undefined4 *)(lVar7 + (long)param_2 * 4);
        if (lVar7 != 0) {
          FUN_002e2f10(lVar7);
          FUN_002e2ef0(PTR_LAB_04373088,lVar7);
        }
        param_1[0x20] = '\0';
        param_1[0x21] = '\0';
        param_1[0x22] = '\0';
        param_1[0x23] = '\0';
        param_1[0x24] = '\0';
        param_1[0x25] = '\0';
        param_1[0x26] = '\0';
        param_1[0x27] = '\0';
        *(undefined4 *)(param_1 + 0x18) = uVar2;
        *param_1 = '\x03';
      }
      else {
        *(uint *)(param_1 + 0x18) = uVar5;
        memmove(*(void **)(param_1 + 0x20),
                (void *)((long)*(void **)(param_1 + 0x20) + (long)param_2 * 4),
                -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2);
      }
      goto joined_r0x00563344;
    }
    lVar7 = *(long *)(param_1 + 0x20);
    if (lVar7 != 0) {
      FUN_002e2f10(lVar7);
      FUN_002e2ef0(PTR_LAB_04373088,lVar7);
    }
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
  }
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  *param_1 = '\x02';
joined_r0x00563344:
  if (uVar9 != 0) {
    do {
      while( true ) {
        lVar7 = local_68[uVar9];
        __dest = (undefined8 *)(lVar7 + 8);
        if (1 < *(ushort *)(lVar7 + 6)) {
          __dest = (undefined8 *)*__dest;
        }
        if (*(char *)*__dest == '\x02') break;
LAB_005632ac:
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          return;
        }
      }
      FUN_0055de34();
      *__dest = 0;
      uVar4 = *(ushort *)(lVar7 + 6);
      if (uVar4 == 2) {
        uVar8 = __dest[1];
        __dest[1] = 0;
        FUN_0055ec6c(lVar7,uVar8);
        FUN_0055de34(uVar8);
        goto LAB_005632ac;
      }
      uVar5 = uVar4 - 1;
      if (uVar4 == 0 || uVar5 == 0) {
        FUN_0054f038(auStack_170,"external/com_github_google_re2/re2/parse.cc",0x34f);
                    /* try { // try from 00563368 to 0056337f has its CatchHandler @ 00563388 */
        this = std::__put_character_sequence<char,std::char_traits<char>>
                         (aoStack_168,"Concat of ",10);
        std::ostream::operator<<(this,(uint)*(ushort *)(lVar7 + 6));
                    /* WARNING: Subroutine does not return */
        FUN_005503fc(auStack_170);
      }
      *(short *)(lVar7 + 6) = (short)uVar5;
      memmove(__dest,__dest + 1,((ulong)uVar5 & 0xffff) << 3);
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  return;
}


