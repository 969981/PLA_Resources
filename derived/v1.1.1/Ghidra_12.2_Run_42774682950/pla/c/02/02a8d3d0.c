/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a8d3d0; name: FUN_02a8d3d0
 */


undefined1  [16] FUN_02a8d3d0(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  FileHandle *pFVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char acStack_344 [772];
  long local_38;
  
  if (*(char *)(param_1 + 0xb1) != '\0') {
LAB_02a8d3f0:
    uVar3 = 0;
    uVar4 = 0;
    goto LAB_02a8d3fc;
  }
  puVar1 = (undefined8 *)PTR_PTR_04379d00;
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x68) + 0x60);
  }
  pcVar7 = (char *)*puVar1;
  snprintf(acStack_344,0x301,"%s",pcVar7);
  auVar11 = FUN_02a8d600(acStack_344);
  uVar4 = auVar11._0_8_;
  if (((uVar4 & 0xff00000000) == 0) || (auVar11._8_4_ != 0)) {
    uVar6 = uVar4 & 0xffffffff00000000;
    uVar4 = uVar4 & 0xffffff0000000000;
    goto LAB_02a8d400;
  }
  plVar9 = (long *)(param_1 + 0xa0);
  lVar5 = 0;
  if (*plVar9 != -1) {
    lVar5 = *plVar9;
  }
  nn::fs::CreateFile(pcVar7,lVar5);
  pFVar8 = (FileHandle *)(param_1 + 0x98);
  if (*(char *)(param_1 + 0xb0) == '\0') {
    uVar2 = nn::fs::OpenFile(pFVar8,pcVar7,2);
    if (uVar2 != 0) goto LAB_02a8d4f4;
    *(undefined1 *)(param_1 + 0xb1) = 1;
    nn::fs::GetFileSize(&local_38,*(undefined8 *)(param_1 + 0x98));
    lVar5 = *(long *)(param_1 + 0xa0);
    if (lVar5 == -1) {
      uVar4 = 0;
      uVar3 = 0;
      *plVar9 = local_38;
    }
    else {
      if (lVar5 < local_38) {
        nn::fs::SetFileSize(*(undefined8 *)(param_1 + 0x98));
      }
      else if (local_38 < lVar5) {
        if (*(char *)(param_1 + 0xb1) != '\0') {
          nn::fs::FlushFile(*(undefined8 *)(param_1 + 0x98));
          nn::fs::CloseFile(*(undefined8 *)(param_1 + 0x98));
          *(undefined1 *)(param_1 + 0xb1) = 0;
        }
        uVar2 = nn::fs::DeleteFile(pcVar7);
        if (uVar2 == 0) {
          nn::fs::CreateFile(pcVar7,*(long *)(param_1 + 0xa0));
          uVar2 = nn::fs::OpenFile(pFVar8,pcVar7,2);
          uVar3 = 0;
          uVar4 = (ulong)uVar2;
          *(bool *)(param_1 + 0xb1) = uVar2 == 0;
        }
        else {
          uVar4 = (ulong)uVar2;
          uVar3 = 0xb;
        }
        goto LAB_02a8d3fc;
      }
      uVar4 = 0;
      uVar3 = 0;
    }
  }
  else {
    uVar2 = nn::fs::OpenFile(pFVar8,pcVar7,6);
    if (uVar2 == 0) {
      *(undefined1 *)(param_1 + 0xb1) = 1;
      if (*(long *)(param_1 + 0xa0) != -1) {
        nn::fs::SetFileSize(*(undefined8 *)(param_1 + 0x98));
        goto LAB_02a8d3f0;
      }
      nn::fs::GetFileSize(plVar9,*(undefined8 *)(param_1 + 0x98));
      uVar3 = 0;
      uVar4 = 0;
      *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0xa0);
      goto LAB_02a8d3fc;
    }
LAB_02a8d4f4:
    uVar3 = 0;
    uVar4 = (ulong)uVar2;
  }
LAB_02a8d3fc:
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = uVar3;
  uVar4 = 0;
  uVar6 = 0x100000000;
LAB_02a8d400:
  auVar10._0_8_ = uVar6 & 0xff00000000 | auVar11._0_8_ & 0xffffffff | uVar4;
  auVar10._8_8_ = auVar11._8_8_ & 0xffffffff;
  return auVar10;
}


