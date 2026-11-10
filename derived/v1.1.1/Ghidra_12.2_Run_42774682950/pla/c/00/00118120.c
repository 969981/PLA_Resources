/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00118120; name: FUN_00118120
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

int FUN_00118120(uint *param_1,uint *param_2,uint *param_3,int param_4,undefined8 param_5,
                long param_6,uint *param_7,long param_8,uint param_9)

{
  uint *puVar1;
  void *__src;
  size_t __n;
  uint uVar3;
  uint uVar2;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  code *pcVar10;
  uint *puVar11;
  uint *__src_00;
  uint *__dest;
  ulong uVar12;
  uint *local_70;
  size_t local_68;
  
  puVar11 = param_3;
  if (param_1 < param_2) {
    param_8 = (long)param_7 + param_8;
    puVar1 = (uint *)((long)param_3 + (long)param_4);
    __src_00 = param_7;
    __dest = param_1;
    do {
      while( true ) {
        __n = (long)param_2 - (long)__dest;
        if (0x1ffff < (long)param_2 - (long)__dest) {
          __n = 0x20000;
        }
        if (puVar1 < puVar11 + 1) {
          return -1;
        }
        uVar2 = (*puVar11 & 0xff00ff00) >> 8 | (*puVar11 & 0xff00ff) << 8;
        uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
        if (-1 < (int)uVar3) break;
        uVar12 = (ulong)(uVar3 >> 8 & 0x7ffff);
        __src = (void *)((long)puVar11 + 3);
        if (puVar1 < (uint *)((long)__src + uVar12)) {
          return -1;
        }
        uVar2 = (uVar2 & 0xffff) >> 0xb & 0xf;
        if ((long)uVar12 < (long)__n) {
          if ((long)__n < 0x80) {
            FUN_0010a430();
            pcVar10 = *(code **)PTR_PTR_043722f8;
            if (pcVar10 == (code *)0x0) goto LAB_0011848c;
            pcVar9 = "OODLE ERROR : corruption : chunk_len >= 128\n";
            uVar8 = 0xbbb;
          }
          else {
            lVar5 = FUN_001038c0(8,__n);
            if (lVar5 <= param_8 - (long)__src_00) {
              puVar11 = (uint *)((long)__src_00 + lVar5);
              lVar5 = (long)__dest + (param_6 - (long)param_1);
              if ((param_9 & 1) != 0) {
                FUN_0010a1f0(__src_00,0x60);
                lVar6 = FUN_001184d0(uVar2,__src,(uint *)((long)__src + uVar12),__dest,__n,lVar5,
                                     __src_00 + 0x18,puVar11,__src_00);
                if (lVar6 < 0) {
                  __src_00[0] = 0;
                  __src_00[1] = 0;
                  return -1;
                }
              }
              if ((param_9 >> 1 & 1) != 0) {
                if (1 < uVar2) {
                  return -1;
                }
                if (*(uint **)__src_00 != __dest) {
                  return -1;
                }
                if (uVar2 == 0) {
                  uVar7 = FUN_00119180(__src_00,__dest + (ulong)(lVar5 == 0) * 2,__dest,
                                       (long)__dest + __n,(long)__dest - lVar5);
                }
                else {
                  if (uVar2 != 1) {
                    iVar4 = FUN_0010a390("v:\\devel\\projects\\oodle2\\core\\newlz.cpp",0xb41,
                                         "newLZ_decode_chunk_phase2","bad chunk_type");
                    if (iVar4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                      halt_baddata();
                    }
                    goto LAB_00118408;
                  }
                  uVar7 = FUN_00118b20(__src_00,__dest + (ulong)(lVar5 == 0) * 2,__dest,
                                       (long)__dest + __n,(long)__dest - lVar5);
                }
                if ((uVar7 & 1) == 0) {
                  return -1;
                }
              }
LAB_00118408:
              __src_00 = param_7;
              if (param_9 != 3) {
                __src_00 = puVar11;
              }
              puVar11 = (uint *)((long)__src + uVar12);
              goto joined_r0x00118428;
            }
            FUN_0010a430();
            pcVar10 = *(code **)PTR_PTR_043722f8;
            if (pcVar10 == (code *)0x0) goto LAB_0011848c;
            pcVar9 = "OODLE ERROR : decoder scratch too small\n";
            uVar8 = 0xbc3;
          }
          (*pcVar10)(0,"v:\\devel\\projects\\oodle2\\core\\newlz.cpp",uVar8,pcVar9);
LAB_0011848c:
          FUN_0010a450();
          return -1;
        }
        if (uVar2 != 0) {
          return -1;
        }
        if ((long)__n < (long)uVar12) {
          return -1;
        }
        if ((param_9 & 1) != 0) {
          memmove(__dest,__src,__n);
        }
        __dest = (uint *)((long)__dest + __n);
        puVar11 = (uint *)((long)__src + uVar12);
        if (param_2 <= __dest) goto LAB_0011842c;
      }
      if ((param_9 & 1) == 0) {
        lVar5 = FUN_001199a0(puVar11,puVar1,&local_68,__n);
      }
      else if ((puVar1 < __dest) || ((uint *)((long)__dest + __n) < puVar11)) {
        local_70 = __dest;
        lVar5 = FUN_00118920(&local_70,puVar11,puVar1,&local_68,__n,0,__src_00,param_8);
        if (local_70 != __dest) {
          return -1;
        }
      }
      else {
        local_70 = __src_00;
        lVar5 = FUN_00118920(&local_70,puVar11,puVar1,&local_68,__n,0,__src_00,param_8);
        if (local_70 != __src_00) {
          return -1;
        }
        memcpy(__dest,__src_00,__n);
      }
      if (lVar5 < 0) {
        return -1;
      }
      if ((long)__n <= lVar5) {
        return -1;
      }
      if (local_68 != __n) {
        return -1;
      }
      puVar11 = (uint *)((long)puVar11 + lVar5);
joined_r0x00118428:
      __dest = (uint *)((long)__dest + __n);
    } while (__dest < param_2);
  }
LAB_0011842c:
  return (int)puVar11 - (int)param_3;
}


