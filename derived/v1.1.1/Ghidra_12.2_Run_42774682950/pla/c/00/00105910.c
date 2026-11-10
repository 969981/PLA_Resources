/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00105910; name: FUN_00105910
 */


long FUN_00105910(ulong param_1,long param_2,ulong param_3,long param_4,ulong *param_5,
                 undefined4 *param_6)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  code *pcVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  int local_98 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  if ((param_3 & 0x3fff) == 0) {
    if (param_2 < 2) {
LAB_0010597c:
      lVar6 = 0;
    }
    else {
      uVar1 = param_4 + param_3;
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = 1;
      }
      local_70 = 0;
      local_68 = 0;
      local_78 = 0;
      uVar13 = param_1;
      uVar15 = param_3;
      if ((long)param_3 < (long)uVar1) {
        uVar2 = param_1 + param_2;
        do {
          while( true ) {
            uVar11 = uVar15 + 0x40000 & 0xfffffffffffc0000;
            if ((long)uVar1 <= (long)uVar11) {
              uVar11 = uVar1;
            }
            iVar14 = (int)(uVar11 - uVar15);
            if ((uVar15 & 0x3ffff) == 0) break;
            if (param_6 != (undefined4 *)0x0) {
              *param_6 = 0;
            }
joined_r0x00105b0c:
            if (iVar14 < 1) {
              iVar5 = 0;
            }
            else {
              iVar5 = 0;
              do {
                iVar12 = iVar14 - iVar5;
                if (0x3fff < iVar12) {
                  iVar12 = 0x4000;
                }
                iVar4 = FUN_0010a980(uVar13,uVar2,local_98,local_68._4_4_,iVar12);
                if (iVar4 < 1) {
LAB_00105bd0:
                  if (param_5 != (ulong *)0x0) {
                    *param_5 = uVar15;
                  }
                  goto LAB_00105bdc;
                }
                if (((long)param_3 < (long)uVar15) &&
                   ((long)(uVar2 - uVar13) < (long)(local_98[0] + iVar4))) goto LAB_00105bd0;
                if ((long)(uVar2 - uVar13) < (long)(local_98[0] + iVar4)) goto LAB_0010597c;
                if (local_98[0] < 0) {
                  FUN_0010a430();
                  pcVar10 = *(code **)PTR_PTR_043722f8;
                  if (pcVar10 == (code *)0x0) goto LAB_00105968;
                  pcVar9 = "OODLE ERROR : corruption : qh.compLen >= 0\n";
                  uVar8 = 0x9dd;
                  goto LAB_00105960;
                }
                if (0x4000 < local_98[0]) {
                  FUN_0010a430();
                  pcVar10 = *(code **)PTR_PTR_043722f8;
                  if (pcVar10 == (code *)0x0) goto LAB_00105968;
                  pcVar9 = "OODLE ERROR : corruption : qh.compLen <= (1<<14)\n";
                  uVar8 = 0x9de;
                  goto LAB_00105960;
                }
                iVar5 = iVar12 + iVar5;
                uVar15 = uVar15 + (long)iVar12;
                uVar13 = uVar13 + (long)iVar4 + (long)local_98[0];
                if ((iVar5 < iVar14) && ((long)uVar1 <= (long)uVar15)) goto LAB_00105bd0;
              } while (iVar5 < iVar14);
            }
            if (uVar2 < uVar13) {
              FUN_0010a430();
              pcVar10 = *(code **)PTR_PTR_043722f8;
              if (pcVar10 == (code *)0x0) goto LAB_00105968;
              pcVar9 = "OODLE ERROR : corruption : compPtr <= compEnd\n";
              uVar8 = 0x9f3;
              goto LAB_00105960;
            }
            if (iVar5 != iVar14) {
              FUN_0010a430();
              pcVar10 = *(code **)PTR_PTR_043722f8;
              if (pcVar10 == (code *)0x0) goto LAB_00105968;
              pcVar9 = "OODLE ERROR : corruption : chunkGot == chunkLen\n";
              uVar8 = 0x9f4;
              goto LAB_00105960;
            }
joined_r0x00105ad0:
            if ((long)uVar1 <= (long)uVar15) goto LAB_00105bc4;
          }
          if ((long)(uVar2 - uVar13) < 2) goto LAB_0010597c;
          uVar7 = FUN_0010a590(&local_78,uVar13);
          if (uVar7 == 0) {
            FUN_0010a430();
            pcVar10 = *(code **)PTR_PTR_043722f8;
            if (pcVar10 == (code *)0x0) goto LAB_00105cf8;
            pcVar9 = "OODLE ERROR : corruption : compPtr != 0L\n";
            uVar8 = 0x957;
            goto LAB_00105cf0;
          }
          if (local_70._4_4_ != 0) {
            lVar6 = (long)iVar14;
            if ((long)(uVar2 - uVar7) < lVar6) {
LAB_00105c8c:
              if (param_5 == (ulong *)0x0) {
                return uVar13 - param_1;
              }
              *param_5 = uVar15;
              return uVar13 - param_1;
            }
            uVar15 = lVar6 + uVar15;
            uVar13 = uVar7 + lVar6;
            goto joined_r0x00105ad0;
          }
          if (0xc < local_78._4_4_) {
LAB_00105c00:
            FUN_0010a430();
            pcVar10 = *(code **)PTR_PTR_043722f8;
            if (pcVar10 == (code *)0x0) goto LAB_00105968;
            pcVar9 = "OODLE ERROR : corruption : unknown LZ code type";
            uVar8 = 0x9ae;
            goto LAB_00105960;
          }
          uVar3 = 1 << (ulong)(local_78._4_4_ & 0x1f);
          if ((uVar3 & 0x8bf) != 0) {
            uVar13 = uVar7;
            if ((param_6 != (undefined4 *)0x0) && ((int)local_68 == 0)) {
              *param_6 = 0;
            }
            goto joined_r0x00105b0c;
          }
          if ((uVar3 & 0x1440) == 0) goto LAB_00105c00;
          if ((param_6 != (undefined4 *)0x0) && ((int)local_68 == 0)) {
            *param_6 = 0;
          }
          iVar5 = FUN_0010ab00(uVar7,uVar2,local_98,local_68._4_4_,uVar11 - uVar15 & 0xffffffff);
          if (iVar5 < 1) {
            if ((long)(uVar2 - uVar7) < 0x10) goto LAB_00105c8c;
            FUN_0010a430();
            pcVar10 = *(code **)PTR_PTR_043722f8;
            if (pcVar10 == (code *)0x0) goto LAB_00105968;
            pcVar9 = "OODLE ERROR : corruption : lzqhlen > 0\n";
            uVar8 = 0x98e;
            goto LAB_00105960;
          }
          if ((long)(uVar2 - uVar7) < (long)iVar5) {
            FUN_0010a430();
            pcVar10 = *(code **)PTR_PTR_043722f8;
            if (pcVar10 == (code *)0x0) goto LAB_00105cf8;
            pcVar9 = "OODLE ERROR : corruption : rrPtrDiff(compEnd - compPtr) >= lzqhlen\n";
            uVar8 = 0x992;
LAB_00105cf0:
            (*pcVar10)(0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar8,pcVar9);
LAB_00105cf8:
            FUN_0010a450();
            return 0;
          }
          if (local_98[0] < 0) {
            FUN_0010a430();
            pcVar10 = *(code **)PTR_PTR_043722f8;
            if (pcVar10 == (code *)0x0) goto LAB_00105968;
            pcVar9 = "OODLE ERROR : corruption : qh.compLen >= 0\n";
            uVar8 = 0x996;
            goto LAB_00105960;
          }
          if (0x40000 < local_98[0]) {
            FUN_0010a430();
            pcVar10 = *(code **)PTR_PTR_043722f8;
            if (pcVar10 == (code *)0x0) goto LAB_00105968;
            pcVar9 = "OODLE ERROR : corruption : qh.compLen <= (1<<18)\n";
            uVar8 = 0x997;
            goto LAB_00105960;
          }
          lVar6 = uVar7 + (long)iVar5;
          if ((long)(uVar2 - lVar6) < (long)local_98[0]) {
            FUN_0010a430();
            pcVar10 = *(code **)PTR_PTR_043722f8;
            if (pcVar10 == (code *)0x0) goto LAB_00105cf8;
            pcVar9 = "OODLE ERROR : corruption : rrPtrDiff(compEnd - compPtr) >= qh.compLen\n";
            uVar8 = 0x999;
            goto LAB_00105cf0;
          }
          uVar13 = lVar6 + local_98[0];
          uVar15 = uVar15 + (long)iVar14;
        } while ((long)uVar15 < (long)uVar1);
      }
LAB_00105bc4:
      if (param_5 != (ulong *)0x0) {
        *param_5 = uVar15;
      }
LAB_00105bdc:
      lVar6 = uVar13 - param_1;
    }
  }
  else {
    FUN_0010a430();
    pcVar10 = *(code **)PTR_PTR_043722f8;
    if (pcVar10 != (code *)0x0) {
      pcVar9 = "OODLE ERROR : GetCompressedStepForRawStep : start pos not a quantum!\n";
      uVar8 = 0x919;
LAB_00105960:
      (*pcVar10)(0,"v:\\devel\\projects\\oodle2\\core\\oodlelzcompressors.cpp",uVar8,pcVar9);
    }
LAB_00105968:
    FUN_0010a450();
    lVar6 = -1;
  }
  return lVar6;
}


