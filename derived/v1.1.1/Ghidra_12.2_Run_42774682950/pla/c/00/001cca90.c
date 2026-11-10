/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001cca90; name: FUN_001cca90
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_001cca90(undefined1 (*param_1) [16],uint param_2,undefined1 (*param_3) [16],uint param_4,
                 undefined1 (*param_5) [16],undefined8 *param_6,undefined8 *param_7,byte *param_8)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  uint uVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 (*pauVar20) [16];
  undefined *puVar21;
  bool bVar22;
  bool bVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  float *pfVar30;
  undefined8 *puVar31;
  byte *pbVar32;
  float *pfVar33;
  ulong uVar34;
  undefined1 (*pauVar35) [16];
  uint uVar36;
  uint uVar37;
  byte bVar77;
  undefined8 uVar38;
  undefined1 auVar39 [12];
  byte bVar79;
  byte bVar80;
  byte bVar81;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar40 [12];
  undefined1 auVar48 [16];
  byte bVar78;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar41 [12];
  int iVar83;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar42 [12];
  undefined1 auVar43 [12];
  undefined1 auVar44 [12];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  byte bVar82;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  int iVar88;
  int iVar89;
  undefined8 uVar90;
  undefined1 auVar92 [12];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined8 uVar91;
  float fVar113;
  float fVar114;
  float fVar118;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  int iVar115;
  undefined1 auVar107 [16];
  int iVar116;
  int iVar117;
  int iVar119;
  int iVar120;
  int iVar121;
  int iVar122;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  float fVar123;
  float fVar124;
  undefined8 uVar125;
  float fVar143;
  int iVar145;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar132 [16];
  undefined1 auVar131 [16];
  undefined1 auVar130 [16];
  undefined1 auVar129 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  int iVar144;
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  int iVar146;
  undefined1 auVar142 [16];
  int iVar147;
  undefined8 uVar148;
  undefined8 uVar149;
  int iVar151;
  ulong uVar150;
  float fVar153;
  undefined8 uVar152;
  undefined8 uVar154;
  float fVar155;
  float fVar189;
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar169 [16];
  undefined1 auVar168 [16];
  undefined1 auVar167 [16];
  undefined1 auVar166 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  float fVar190;
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  float fVar204;
  float fVar205;
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  float fVar206;
  float fVar209;
  undefined1 in_q8 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  float fVar210;
  undefined1 auVar211 [16];
  float fVar212;
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar221 [12];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  byte bVar229;
  byte bVar233;
  byte bVar234;
  byte bVar235;
  byte bVar236;
  byte bVar237;
  byte bVar238;
  byte bVar239;
  byte bVar240;
  byte bVar241;
  byte bVar242;
  byte bVar243;
  byte bVar244;
  byte bVar246;
  byte bVar247;
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  int iVar245;
  byte bVar248;
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  float fVar254;
  float fVar255;
  undefined1 auVar256 [12];
  float fVar287;
  float fVar288;
  float fVar291;
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  float fVar289;
  undefined1 auVar266 [16];
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  undefined1 auVar271 [16];
  undefined1 auVar272 [16];
  undefined1 auVar273 [16];
  undefined1 auVar274 [16];
  undefined1 auVar275 [16];
  undefined1 auVar276 [16];
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  undefined1 auVar282 [16];
  undefined1 auVar283 [16];
  float fVar290;
  float fVar292;
  float fVar293;
  undefined1 auVar284 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  undefined1 auVar294 [16];
  float fVar295;
  float fVar308;
  undefined1 auVar296 [16];
  undefined1 auVar297 [16];
  undefined1 auVar298 [16];
  undefined1 auVar302 [16];
  undefined1 auVar301 [16];
  undefined1 auVar300 [16];
  undefined1 auVar299 [16];
  undefined1 auVar303 [16];
  undefined1 auVar307 [16];
  undefined1 auVar306 [16];
  undefined1 auVar305 [16];
  undefined1 auVar304 [16];
  float fVar313;
  ulong uVar309;
  undefined1 auVar310 [16];
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  float fVar314;
  float fVar315;
  uint uVar316;
  float fVar317;
  float fVar329;
  ulong uVar318;
  float fVar326;
  float fVar327;
  uint uVar328;
  float fVar330;
  float fVar331;
  byte bVar332;
  byte bVar333;
  byte bVar334;
  undefined1 auVar319 [16];
  undefined1 auVar322 [16];
  undefined1 auVar321 [16];
  undefined1 auVar320 [16];
  undefined1 auVar323 [16];
  undefined1 auVar324 [16];
  undefined1 auVar325 [16];
  int iVar335;
  float fVar336;
  undefined8 uVar337;
  undefined1 auVar339 [12];
  int iVar351;
  int iVar353;
  int iVar355;
  undefined1 auVar340 [16];
  undefined1 auVar341 [16];
  ulong uVar338;
  undefined1 auVar342 [16];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  undefined1 auVar345 [16];
  float fVar354;
  float fVar356;
  undefined1 auVar346 [16];
  undefined1 auVar347 [16];
  float fVar352;
  undefined1 auVar348 [16];
  undefined1 auVar349 [16];
  undefined1 auVar350 [16];
  float fVar357;
  float fVar363;
  float fVar364;
  undefined1 auVar358 [16];
  undefined1 auVar359 [16];
  undefined1 auVar360 [16];
  undefined1 auVar361 [16];
  undefined1 auVar362 [16];
  int iVar365;
  int iVar372;
  int iVar373;
  int iVar374;
  undefined1 auVar366 [16];
  undefined1 auVar367 [16];
  undefined1 auVar368 [16];
  undefined1 auVar369 [16];
  undefined1 auVar370 [16];
  undefined1 auVar371 [16];
  undefined8 uVar375;
  undefined1 auVar378 [12];
  undefined1 auVar379 [16];
  undefined1 auVar380 [16];
  undefined1 auVar384 [16];
  undefined1 auVar383 [16];
  undefined1 auVar382 [16];
  undefined1 auVar381 [16];
  undefined1 auVar385 [16];
  undefined1 auVar386 [16];
  undefined1 auVar387 [16];
  ulong uVar376;
  ulong uVar377;
  undefined1 auVar388 [16];
  undefined1 auVar389 [16];
  undefined1 auVar390 [16];
  undefined1 auVar391 [16];
  undefined1 auVar392 [16];
  undefined1 auVar393 [16];
  float fVar394;
  float fVar405;
  undefined1 auVar395 [16];
  undefined1 auVar396 [16];
  undefined1 auVar397 [16];
  undefined1 auVar398 [16];
  undefined1 auVar399 [16];
  undefined1 auVar400 [16];
  undefined1 auVar401 [16];
  undefined1 auVar402 [16];
  undefined1 auVar403 [16];
  undefined1 auVar404 [16];
  float fVar406;
  int iVar407;
  int iVar419;
  byte bVar420;
  byte bVar421;
  int iVar423;
  byte bVar424;
  byte bVar425;
  byte bVar428;
  byte bVar429;
  undefined1 auVar408 [16];
  undefined1 auVar409 [16];
  undefined1 auVar410 [16];
  undefined1 auVar411 [16];
  undefined1 auVar412 [16];
  undefined1 auVar413 [16];
  undefined1 auVar414 [16];
  undefined1 auVar415 [16];
  byte bVar418;
  byte bVar422;
  byte bVar426;
  int iVar427;
  byte bVar430;
  undefined1 auVar416 [16];
  undefined1 auVar417 [16];
  undefined8 uVar431;
  undefined1 auVar432 [16];
  undefined1 auVar433 [16];
  undefined1 auVar434 [16];
  undefined1 auVar435 [16];
  undefined1 auVar436 [16];
  undefined1 auVar437 [16];
  undefined1 auVar438 [16];
  undefined1 auVar442 [16];
  undefined1 auVar441 [16];
  undefined1 auVar440 [16];
  undefined1 auVar439 [16];
  undefined1 auVar443 [16];
  undefined1 auVar447 [16];
  undefined1 auVar446 [16];
  undefined1 auVar445 [16];
  undefined1 auVar444 [16];
  float fVar448;
  float fVar449;
  float fVar452;
  undefined1 auVar450 [16];
  undefined1 auVar451 [16];
  float afStackY_9f0 [404];
  float local_360;
  undefined4 local_340;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  int local_2c8;
  undefined8 local_2c0;
  float local_280 [4];
  float local_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float local_244;
  float local_210 [3];
  float fStack_204;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  uint local_1a0;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  undefined1 (*local_168) [16];
  uint local_160;
  undefined1 (*local_158) [16];
  uint local_150;
  undefined *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100 [4];
  undefined8 local_e0;
  undefined8 uStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 local_b8;
  uint local_b0;
  uint local_ac [5];
  
  puVar21 = PTR_DAT_04372370;
  local_158 = param_1;
  local_150 = param_2;
  local_148 = PTR_DAT_04372690 + 0x10;
  local_168 = param_3;
  local_160 = param_4;
  uVar4 = *(uint *)(param_5[6] + 0xc);
  uVar148 = *(undefined8 *)param_5[5];
  uVar90 = *(undefined8 *)param_5[6];
  auVar45 = *param_5;
  *(undefined4 *)(param_6 + 6) = 0;
  fVar84 = *(float *)*param_5 * *(float *)*param_5;
  fVar85 = *(float *)(*param_5 + 4) * *(float *)(*param_5 + 4);
  fVar86 = *(float *)(*param_5 + 8) * *(float *)(*param_5 + 8);
  fVar123 = fVar84 + fVar85 + fVar86;
  fVar86 = fVar84 + fVar85 + fVar86;
  uVar38 = CONCAT44(fVar86,fVar123);
  if ((((uVar4 & 1) == 0) && (param_7 == (undefined8 *)0x0)) &&
     (fVar123 < *(float *)(puVar21 + 0x270))) {
    return false;
  }
  auVar250 = *(undefined1 (*) [16])(puVar21 + 0x50);
  uVar149 = NEON_fmax(CONCAT44((float)((ulong)uVar148 >> 0x20) * 0.1,(float)uVar148 * 0.1),
                      0x37a7c5ac37a7c5ac,4);
  uVar148 = auVar250._0_8_;
  uVar90 = NEON_fmax(CONCAT44((float)((ulong)uVar149 >> 0x20) - (float)((ulong)uVar90 >> 0x20),
                              (float)uVar149 - (float)uVar90),uVar148,4);
  fVar84 = (float)uVar90;
  fVar85 = (float)((ulong)uVar90 >> 0x20);
  if (param_7 == (undefined8 *)0x0) {
    uVar90 = NEON_frsqrte(uVar38,4);
    fVar124 = (float)uVar90;
    fVar143 = (float)((ulong)uVar90 >> 0x20);
    iVar147 = -(uint)(fVar123 <= 0.0);
    iVar151 = -(uint)(fVar86 <= 0.0);
    uVar90 = NEON_frsqrts(uVar38,CONCAT44(fVar143 * fVar143,fVar124 * fVar124),4);
    fVar124 = fVar124 * (float)uVar90;
    fVar143 = fVar143 * (float)((ulong)uVar90 >> 0x20);
    fVar86 = (float)CONCAT13((byte)((uint)fVar124 >> 0x18) & ~(byte)((uint)iVar147 >> 0x18),
                             CONCAT12((byte)((uint)fVar124 >> 0x10) & ~(byte)((uint)iVar147 >> 0x10)
                                      ,CONCAT11((byte)((uint)fVar124 >> 8) &
                                                ~(byte)((uint)iVar147 >> 8),
                                                SUB41(fVar124,0) & ~(byte)iVar147)));
    local_2c0 = NEON_fmax(uVar148,CONCAT44((float)((ulong)*(undefined8 *)(param_5[5] + 8) >> 0x20) -
                                           fVar85 * (float)(CONCAT17((byte)((uint)fVar143 >> 0x18) &
                                                                     ~(byte)((uint)iVar151 >> 0x18),
                                                                     CONCAT16((byte)((uint)fVar143
                                                                                    >> 0x10) &
                                                                              ~(byte)((uint)iVar151
                                                                                     >> 0x10),
                                                                              CONCAT15((byte)((uint)
                                                  fVar143 >> 8) & ~(byte)((uint)iVar151 >> 8),
                                                  CONCAT14(SUB41(fVar143,0) & ~(byte)iVar151,fVar86)
                                                  ))) >> 0x20),
                                           (float)*(undefined8 *)(param_5[5] + 8) - fVar84 * fVar86)
                          ,4);
  }
  else {
    *(undefined4 *)(param_7 + 6) = 0;
    local_2c0 = uVar148;
  }
  uVar3 = uVar4 & 1;
  uVar4 = uVar4 & 2;
  fVar123 = auVar45._0_4_;
  local_280[0] = fVar123 * (float)local_2c0;
  fVar86 = (float)((ulong)local_2c0 >> 0x20);
  fVar124 = auVar45._4_4_;
  local_280[1] = fVar124 * fVar86;
  fVar143 = auVar45._8_4_;
  local_280[2] = fVar143 * (float)local_2c0;
  local_280[3] = fVar86 * 0.0;
  if (param_8 == (byte *)0x0) {
    uVar26 = 1;
    local_b0 = 1;
    local_ac[0] = 1;
    fStack_268 = *(float *)(*param_1 + 8);
    local_270 = (float)*(undefined8 *)*param_1;
    fStack_26c = (float)((ulong)*(undefined8 *)*param_1 >> 0x20);
    fStack_264 = 0.5;
    auVar76 = param_5[1];
    auVar249 = param_5[2];
    auVar251 = param_5[3];
    uVar24 = 1;
    auVar156 = NEON_ext(auVar76,auVar76,8,1);
    auVar252 = NEON_ext(auVar249,auVar249,8,1);
    auVar253 = NEON_ext(auVar251,auVar251,8,1);
    fVar86 = (float)*(undefined8 *)*param_3 - *(float *)param_5[4];
    fVar153 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20) - *(float *)(param_5[4] + 4);
    fVar314 = *(float *)(*param_3 + 8) - *(float *)(param_5[4] + 8);
    local_210[2] = (auVar253._0_4_ * fVar314 + auVar251._0_4_ * fVar86 + auVar251._4_4_ * fVar153) -
                   local_280[2];
    fStack_204 = 0.5;
    local_210[0] = (auVar156._0_4_ * fVar314 + auVar76._0_4_ * fVar86 + auVar76._4_4_ * fVar153) -
                   local_280[0];
    local_210[1] = (auVar252._0_4_ * fVar314 + auVar249._0_4_ * fVar86 + auVar249._4_4_ * fVar153) -
                   local_280[1];
  }
  else {
    bVar332 = param_8[4];
    uVar24 = (ulong)(bVar332 >> 6);
    pfVar30 = &local_270;
    uVar316 = bVar332 & 3;
    uVar26 = (ulong)uVar316;
    local_b0 = uVar316;
    local_ac[0] = (uint)(bVar332 >> 6);
    uVar34 = uVar24;
    pbVar32 = param_8;
    do {
      bVar333 = *pbVar32;
      uVar90 = *(undefined8 *)(*param_1 + (ulong)bVar333 * 0xc);
      uVar7 = *(undefined4 *)((long)(*param_1 + (ulong)bVar333 * 0xc) + 8);
      uVar328 = (int)uVar34 - 1;
      uVar34 = (ulong)uVar328;
      *(ulong *)(pfVar30 + 2) = CONCAT44(uVar7,uVar7);
      *(undefined8 *)pfVar30 = uVar90;
      pfVar30[3] = (float)(bVar333 | 0x3f000000);
      pfVar30 = pfVar30 + 4;
      pbVar32 = pbVar32 + 1;
    } while (uVar328 != 0);
    puVar31 = &local_140;
    pbVar32 = param_8 + (param_8[4] >> 6);
    uVar328 = uVar316;
    do {
      bVar333 = *pbVar32;
      uVar90 = *(undefined8 *)(*param_3 + (ulong)bVar333 * 0xc);
      uVar7 = *(undefined4 *)((long)(*param_3 + (ulong)bVar333 * 0xc) + 8);
      uVar328 = uVar328 - 1;
      puVar31[1] = CONCAT44(uVar7,uVar7);
      *puVar31 = uVar90;
      *(uint *)((long)puVar31 + 0xc) = bVar333 | 0x3f000000;
      puVar31 = puVar31 + 2;
      pbVar32 = pbVar32 + 1;
    } while (uVar328 != 0);
    if ((bVar332 & 3) != 0) {
      auVar76 = param_5[3];
      fVar190 = auVar76._4_4_;
      auVar249 = param_5[1];
      auVar251 = param_5[2];
      fVar86 = auVar249._0_4_;
      fVar326 = auVar251._0_4_;
      fVar314 = auVar249._4_4_;
      fVar406 = auVar251._4_4_;
      auVar249 = NEON_ext(auVar249,auVar249,8,1);
      auVar251 = NEON_ext(auVar251,auVar251,8,1);
      auVar253 = NEON_ext(auVar76,auVar76,8,1);
      fVar153 = auVar249._0_4_;
      fVar330 = auVar251._0_4_;
      fVar189 = (float)*(undefined8 *)param_5[4];
      local_140._0_4_ = (float)local_140 - fVar189;
      fVar448 = (float)((ulong)*(undefined8 *)param_5[4] >> 0x20);
      local_140._4_4_ = local_140._4_4_ - fVar448;
      fVar210 = (float)*(undefined8 *)(param_5[4] + 8);
      uStack_138._0_4_ = (float)uStack_138 - fVar210;
      fVar155 = auVar76._0_4_;
      fVar206 = auVar253._0_4_;
      local_210[2] = (fVar206 * (float)uStack_138 +
                     fVar155 * (float)local_140 + fVar190 * local_140._4_4_) - local_280[2];
      fStack_204 = uStack_138._4_4_;
      local_210[0] = (fVar153 * (float)uStack_138 +
                     fVar86 * (float)local_140 + fVar314 * local_140._4_4_) - local_280[0];
      local_210[1] = (fVar330 * (float)uStack_138 +
                     fVar326 * (float)local_140 + fVar406 * local_140._4_4_) - local_280[1];
      if (uVar316 != 1) {
        local_130._0_4_ = (float)local_130 - fVar189;
        local_130._4_4_ = local_130._4_4_ - fVar448;
        uStack_128._0_4_ = (float)uStack_128 - fVar210;
        fStack_1f8 = (fVar206 * (float)uStack_128 +
                     fVar155 * (float)local_130 + fVar190 * local_130._4_4_) - local_280[2];
        fStack_1f4 = uStack_128._4_4_;
        local_200 = (fVar153 * (float)uStack_128 +
                    fVar86 * (float)local_130 + fVar314 * local_130._4_4_) - local_280[0];
        fStack_1fc = (fVar330 * (float)uStack_128 +
                     fVar326 * (float)local_130 + fVar406 * local_130._4_4_) - local_280[1];
        if (uVar316 != 2) {
          local_120._0_4_ = (float)local_120 - fVar189;
          local_120._4_4_ = local_120._4_4_ - fVar448;
          uStack_118._0_4_ = (float)uStack_118 - fVar210;
          uStack_1e8 = CONCAT44(uStack_118._4_4_,
                                (fVar206 * (float)uStack_118 +
                                fVar155 * (float)local_120 + fVar190 * local_120._4_4_) -
                                local_280[2]);
          local_1f0 = CONCAT44((fVar330 * (float)uStack_118 +
                               fVar326 * (float)local_120 + fVar406 * local_120._4_4_) -
                               local_280[1],
                               (fVar153 * (float)uStack_118 +
                               fVar86 * (float)local_120 + fVar314 * local_120._4_4_) - local_280[0]
                              );
        }
      }
    }
  }
  uVar90 = *(undefined8 *)(puVar21 + 0x290);
  local_2c8 = 0;
  uVar150 = *(ulong *)(puVar21 + 0x60);
  uVar154 = *(undefined8 *)(puVar21 + 0x2d8);
  uVar152 = *(undefined8 *)(puVar21 + 0x2d0);
  pauVar2 = param_5 + 1;
  fVar314 = 0.0 - fVar123;
  fVar326 = 0.0 - fVar124;
  fVar330 = 0.0 - fVar143;
  uVar149 = CONCAT44((int)*(undefined8 *)(puVar21 + 0x30),(int)*(undefined8 *)(puVar21 + 0x30));
  local_b8 = 0x3727c5ac3727c5ac;
  uVar38 = NEON_fmax(*(undefined8 *)param_5[5],CONCAT44(fVar85 + 1e-06,fVar84 + 1e-06),4);
  fVar153 = (float)uVar150;
  iVar365 = -(uint)(fVar314 == 0.0);
  iVar372 = -(uint)(fVar326 == 0.0);
  iVar373 = -(uint)(fVar330 == 0.0);
  iVar374 = -(uint)(fVar153 == 0.0);
  auVar251 = *(undefined1 (*) [16])(puVar21 + 0x240);
  iVar335 = -(uint)(fVar123 == 0.0);
  iVar351 = -(uint)(fVar124 == 0.0);
  iVar353 = -(uint)(fVar143 == 0.0);
  iVar355 = -(uint)(fVar153 == 0.0);
  iVar147 = *(int *)(PTR_DAT_04372388 + 0x40);
  iVar151 = *(int *)(PTR_DAT_04372388 + 0x44);
  iVar13 = *(int *)(PTR_DAT_04372388 + 0x48);
  iVar14 = *(int *)(PTR_DAT_04372388 + 0x4c);
  auVar76 = *(undefined1 (*) [16])(PTR_DAT_04372388 + 0x50);
  auVar249 = *(undefined1 (*) [16])(puVar21 + 0x250);
  bVar332 = (byte)(uVar150 >> 8);
  bVar333 = (byte)(uVar150 >> 0x10);
  bVar334 = (byte)(uVar150 >> 0x18);
  auVar156 = NEON_ext(auVar249,auVar249,8,1);
  fVar86 = (float)CONCAT13(auVar45[3] & ~(byte)((uint)iVar335 >> 0x18),
                           CONCAT12(auVar45[2] & ~(byte)((uint)iVar335 >> 0x10),
                                    CONCAT11(auVar45[1] & ~(byte)((uint)iVar335 >> 8),
                                             auVar45[0] & ~(byte)iVar335)));
  auVar92._0_8_ =
       CONCAT17(auVar45[7] & ~(byte)((uint)iVar351 >> 0x18),
                CONCAT16(auVar45[6] & ~(byte)((uint)iVar351 >> 0x10),
                         CONCAT15(auVar45[5] & ~(byte)((uint)iVar351 >> 8),
                                  CONCAT14(auVar45[4] & ~(byte)iVar351,fVar86))));
  auVar92[8] = auVar45[8] & ~(byte)iVar353;
  auVar92[9] = auVar45[9] & ~(byte)((uint)iVar353 >> 8);
  auVar92[10] = auVar45[10] & ~(byte)((uint)iVar353 >> 0x10);
  auVar92[0xb] = auVar45[0xb] & ~(byte)((uint)iVar353 >> 0x18);
  auVar253[0xc] = (byte)uVar150 & ~(byte)iVar355;
  auVar253._0_12_ = auVar92;
  auVar253[0xd] = bVar332 & ~(byte)((uint)iVar355 >> 8);
  auVar253[0xe] = bVar333 & ~(byte)((uint)iVar355 >> 0x10);
  auVar253[0xf] = bVar334 & ~(byte)((uint)iVar355 >> 0x18);
  auVar45 = NEON_ext(auVar156,auVar249,8,1);
  auVar156 = NEON_ext(auVar250,auVar250,8,1);
  fStack_2d8 = auVar92._8_4_;
  fStack_2d4 = auVar253._12_4_;
  fStack_2dc = (float)((ulong)auVar92._0_8_ >> 0x20);
  auVar250 = NEON_ext(auVar156,auVar250,8,1);
  bVar22 = uVar3 != 0;
  uVar34 = uVar26;
  uVar376 = uVar24;
LAB_001cceec:
  uVar91 = uStack_1a8;
  uVar125 = local_1b0;
  fVar113 = fStack_1d4;
  fVar87 = fStack_1dc;
  fVar356 = local_1e0;
  fVar354 = local_244;
  fVar209 = fStack_24c;
  fVar206 = fStack_250;
  fVar190 = fStack_264;
  fVar155 = fStack_268;
  fVar210 = fStack_26c;
  fVar448 = local_270;
  iVar335 = (int)uVar376;
  uVar316 = (uint)uVar34 | iVar335 << 3;
  uVar37 = local_ac[0];
  uVar328 = local_150;
  fVar406 = local_210[1];
  fVar189 = fStack_204;
  pauVar20 = local_168;
  pauVar1 = local_158;
  uVar25 = local_b0;
  if (0x18 < uVar316 - 9) goto switchD_001ccf14_caseD_16;
  fVar114 = (float)(uVar150 >> 0x20);
  bVar77 = (byte)_DAT_03889700;
  bVar78 = (byte)((ulong)_DAT_03889700 >> 0x20);
  bVar418 = (byte)((ulong)_DAT_03889700 >> 0x38);
  bVar420 = (byte)_UNK_03889708;
  bVar421 = (byte)((ulong)_UNK_03889708 >> 8);
  bVar422 = (byte)((ulong)_UNK_03889708 >> 0x10);
  bVar424 = (byte)((ulong)_UNK_03889708 >> 0x18);
  bVar425 = (byte)((ulong)_UNK_03889708 >> 0x20);
  bVar426 = (byte)((ulong)_UNK_03889708 >> 0x28);
  bVar428 = (byte)((ulong)_UNK_03889708 >> 0x30);
  bVar429 = (byte)((ulong)_UNK_03889708 >> 0x38);
  pfVar33 = &local_270;
  pfVar30 = local_210;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar316) {
  case 0x12:
switchD_001ccf14_caseD_12:
    in_q8._0_4_ = local_270 - local_210[0];
    in_q8._4_4_ = fStack_26c - local_210[1];
    in_q8._8_4_ = fStack_268 - local_210[2];
    in_q8._12_4_ = fStack_264 - fStack_204;
    break;
  case 0x13:
    goto switchD_001ccf14_caseD_13;
  case 0x14:
switchD_001ccf14_caseD_14:
    fVar210 = fStack_204;
    fVar448 = local_210[2];
    fVar189 = local_210[1];
    fVar406 = local_210[0];
    fVar155 = (float)local_1f0;
    fVar190 = local_1f0._4_4_;
    fVar206 = uStack_1e8._4_4_;
    auVar276._0_4_ = (float)local_1f0 - local_200;
    auVar276._4_4_ = local_1f0._4_4_ - fStack_1fc;
    auVar276._8_4_ = (float)uStack_1e8 - fStack_1f8;
    auVar276._12_4_ = uStack_1e8._4_4_ - fStack_1f4;
    auVar392._0_4_ = local_210[0] - (float)local_1f0;
    auVar392._4_4_ = local_210[1] - local_1f0._4_4_;
    auVar392._8_4_ = local_210[2] - (float)uStack_1e8;
    auVar392._12_4_ = fStack_204 - uStack_1e8._4_4_;
    auVar215._0_4_ = local_270 - local_200;
    auVar215._4_4_ = fStack_26c - fStack_1fc;
    auVar215._8_4_ = fStack_268 - fStack_1f8;
    auVar215._12_4_ = fStack_264 - fStack_1f4;
    auVar224 = NEON_ext(auVar392,auVar392,4,1);
    auVar218._0_4_ = local_270 - (float)local_1f0;
    auVar218._4_4_ = fStack_26c - local_1f0._4_4_;
    auVar218._8_4_ = fStack_268 - (float)uStack_1e8;
    auVar218._12_4_ = fStack_264 - uStack_1e8._4_4_;
    auVar156 = NEON_ext(auVar276,auVar276,4,1);
    auVar253 = NEON_ext(auVar215,auVar215,4,1);
    auVar412._0_4_ = local_200 - local_210[0];
    auVar412._4_4_ = fStack_1fc - local_210[1];
    auVar412._8_4_ = fStack_1f8 - local_210[2];
    auVar412._12_4_ = fStack_1f4 - fStack_204;
    auVar277._0_4_ = auVar215._0_4_ * auVar156._0_4_ - auVar276._0_4_ * auVar253._0_4_;
    auVar277._4_4_ = auVar215._4_4_ * auVar156._4_4_ - auVar276._4_4_ * auVar253._4_4_;
    auVar277._8_4_ = auVar215._8_4_ * auVar276._0_4_ - auVar276._8_4_ * auVar215._0_4_;
    auVar277._12_4_ = auVar215._12_4_ * auVar276._4_4_ - auVar276._12_4_ * auVar215._4_4_;
    auVar230 = NEON_ext(auVar277,auVar277,4,1);
    fVar114 = auVar276._0_4_ * auVar224._0_4_ - auVar392._0_4_ * auVar156._0_4_;
    fVar118 = auVar276._4_4_ * auVar224._4_4_ - auVar392._4_4_ * auVar156._4_4_;
    auVar402._0_8_ = CONCAT44(fVar118,fVar114);
    auVar402._8_4_ = auVar276._8_4_ * auVar392._0_4_ - auVar392._8_4_ * auVar276._0_4_;
    auVar402._12_4_ = auVar276._12_4_ * auVar392._4_4_ - auVar392._12_4_ * auVar276._4_4_;
    auVar253 = NEON_ext(auVar402,auVar402,4,1);
    auVar370._0_4_ = local_270 - local_210[0];
    auVar370._4_4_ = fStack_26c - local_210[1];
    auVar370._8_4_ = fStack_268 - local_210[2];
    auVar370._12_4_ = fStack_264 - fStack_204;
    auVar252 = NEON_ext(auVar218,auVar218,4,1);
    auVar156 = NEON_ext(auVar412,auVar412,4,1);
    in_q8._8_8_ = auVar402._0_8_;
    in_q8._0_8_ = auVar253._0_8_;
    auVar278._0_4_ = auVar218._0_4_ * auVar224._0_4_ - auVar392._0_4_ * auVar252._0_4_;
    auVar278._4_4_ = auVar218._4_4_ * auVar224._4_4_ - auVar392._4_4_ * auVar252._4_4_;
    auVar278._8_4_ = auVar218._8_4_ * auVar392._0_4_ - auVar392._8_4_ * auVar218._0_4_;
    auVar278._12_4_ = auVar218._12_4_ * auVar392._4_4_ - auVar392._12_4_ * auVar218._4_4_;
    auVar224 = NEON_ext(auVar278,auVar278,4,1);
    fVar356 = auVar253._4_4_;
    auVar252 = NEON_ext(auVar370,auVar370,4,1);
    fVar209 = auVar253._0_4_;
    fVar113 = fVar209 * auVar224._0_4_;
    auVar279._0_4_ = auVar370._0_4_ * auVar156._0_4_ - auVar412._0_4_ * auVar252._0_4_;
    auVar279._4_4_ = auVar370._4_4_ * auVar156._4_4_ - auVar412._4_4_ * auVar252._4_4_;
    auVar279._8_4_ = auVar370._8_4_ * auVar412._0_4_ - auVar412._8_4_ * auVar370._0_4_;
    auVar279._12_4_ = auVar370._12_4_ * auVar412._4_4_ - auVar412._12_4_ * auVar370._4_4_;
    auVar443._0_4_ = fVar209 * auVar230._0_4_;
    auVar443._4_4_ = fVar356 * auVar230._4_4_;
    auVar443._8_4_ = fVar114 * auVar277._0_4_;
    auVar443._12_4_ = fVar118 * auVar277._4_4_;
    auVar253 = NEON_ext(auVar279,auVar279,4,1);
    auVar444._4_12_ = auVar443._4_12_;
    auVar444._0_4_ = auVar443._0_4_;
    auVar446._0_8_ = auVar444._0_8_;
    auVar446._8_4_ = auVar443._8_4_;
    auVar446._12_4_ = auVar443._12_4_;
    auVar445._8_8_ = auVar446._8_8_;
    auVar445._4_4_ = fVar113;
    auVar445._0_4_ = auVar443._0_4_;
    auVar447._0_12_ = auVar445._0_12_;
    auVar447._12_4_ = fVar114 * auVar278._0_4_;
    auVar156 = NEON_ext(auVar447,auVar447,8,1);
    fVar354 = fVar209 * auVar253._0_4_;
    fVar87 = fVar356 * auVar253._4_4_;
    fVar212 = auVar156._0_4_ + fVar356 * auVar230._4_4_ + auVar443._0_4_;
    fVar289 = auVar156._4_4_ + fVar356 * auVar224._4_4_ + fVar113;
    auVar413._0_8_ = CONCAT44(fVar289,fVar212);
    fVar113 = fVar354 + fVar87 + fVar114 * auVar279._0_4_;
    uStack_1a8 = CONCAT44(fVar354 + fVar87 + fVar114 * auVar279._0_4_,fVar113);
    auVar413._8_8_ = uStack_1a8;
    uVar316 = (-(uint)(fVar289 < 0.0) & 2) + (uint)(fVar212 < 0.0) | -(uint)(fVar113 < 0.0) & 4;
    if (uVar316 != 7) {
      local_b0 = 2;
      cVar5 = PTR_DAT_043723e0[uVar316];
      local_1b0 = auVar413._0_8_;
      if (cVar5 < 0) {
        iVar335 = cVar5 + 8;
        if (2 < iVar335) {
LAB_001ce564:
          local_b0 = 1;
          local_ac[0] = 1;
          goto switchD_001ccf14_caseD_12;
        }
        lVar28 = (long)iVar335;
        local_210[lVar28 * 4 + 2] = (float)uStack_1e8;
        local_210[lVar28 * 4 + 3] = fVar206;
        local_210[lVar28 * 4] = fVar155;
        local_210[lVar28 * 4 + 1] = fVar190;
      }
      else {
        iVar335 = (int)cVar5;
        cVar5 = PTR_DAT_043723e8[iVar335];
        lVar27 = (long)cVar5;
        lVar28 = (long)iVar335;
        fVar406 = local_210[lVar28 * 4];
        fVar189 = local_210[lVar28 * 4 + 1];
        fVar448 = local_210[lVar28 * 4 + 2];
        fVar210 = local_210[lVar28 * 4 + 3];
        auVar325._0_4_ = (local_270 - fVar406) * (local_210[lVar27 * 4] - fVar406);
        auVar325._4_4_ = (fStack_26c - fVar189) * (local_210[lVar27 * 4 + 1] - fVar189);
        auVar325._8_4_ = (fStack_268 - fVar448) * (local_210[lVar27 * 4 + 2] - fVar448);
        auVar325._12_4_ = (fStack_264 - fVar210) * (local_210[lVar27 * 4 + 3] - fVar210);
        auVar253 = NEON_ext(auVar325,auVar325,8,1);
        cVar6 = PTR_DAT_043723e8[(long)iVar335 + 2];
        lVar28 = (long)cVar6;
        if (auVar325._0_4_ + auVar325._4_4_ + auVar253._0_4_ < 0.0) {
          fVar209 = local_210[lVar28 * 4];
          fVar354 = local_210[lVar28 * 4 + 1];
          fVar356 = local_210[lVar28 * 4 + 2];
          fVar87 = local_210[lVar28 * 4 + 3];
          local_210[lVar27 * 4 + 2] = (float)uStack_1e8;
          local_210[lVar27 * 4 + 3] = fVar206;
          local_210[lVar27 * 4] = fVar155;
          local_210[lVar27 * 4 + 1] = fVar190;
          auVar186._0_4_ = (local_270 - fVar406) * (fVar209 - fVar406);
          auVar186._4_4_ = (fStack_26c - fVar189) * (fVar354 - fVar189);
          auVar186._8_4_ = (fStack_268 - fVar448) * (fVar356 - fVar448);
          auVar186._12_4_ = (fStack_264 - fVar210) * (fVar87 - fVar210);
          auVar253 = NEON_ext(auVar186,auVar186,8,1);
          if (auVar186._0_4_ + auVar186._4_4_ + auVar253._0_4_ < 0.0) {
            uVar125 = CONCAT44(fStack_1fc,local_200);
            if (cVar6 != '\x02') {
              cVar5 = cVar6;
            }
            local_b0 = 1;
            *(ulong *)(local_210 + (long)cVar5 * 4 + 2) = CONCAT44(fStack_1f4,fStack_1f8);
            *(undefined8 *)(local_210 + (long)cVar5 * 4) = uVar125;
            goto switchD_001ccf14_caseD_12;
          }
        }
        else {
          local_210[lVar28 * 4 + 2] = (float)uStack_1e8;
          local_210[lVar28 * 4 + 3] = fVar206;
          local_210[lVar28 * 4] = fVar155;
          local_210[lVar28 * 4 + 1] = fVar190;
        }
      }
      goto switchD_001ccf14_caseD_13;
    }
    auVar183._0_4_ = auVar370._0_4_ * fVar209;
    auVar183._4_4_ = auVar370._4_4_ * fVar356;
    auVar183._8_4_ = auVar370._8_4_ * fVar114;
    auVar183._12_4_ = auVar370._12_4_ * fVar118;
    auVar253 = NEON_ext(auVar183,auVar183,8,1);
    if (auVar253._0_4_ + auVar183._0_4_ + auVar183._4_4_ < 0.0) {
      in_q8._0_4_ = -fVar209;
      in_q8._4_4_ = -fVar356;
      in_q8._8_4_ = -fVar114;
      in_q8._12_4_ = -fVar118;
      auVar184._8_8_ = _UNK_03888fb8;
      auVar184._0_8_ = _DAT_03888fb0;
      local_210[2] = fStack_1f8;
      fStack_204 = fStack_1f4;
      local_210[0] = local_200;
      local_210[1] = fStack_1fc;
      fStack_1f8 = fVar448;
      fStack_1f4 = fVar210;
      local_200 = fVar406;
      fStack_1fc = fVar189;
      auVar413 = a64_TBL(ZEXT816(0),auVar413,auVar184);
    }
    uStack_1a8 = auVar413._8_8_;
    local_1b0 = auVar413._0_8_;
    break;
  case 0x15:
    fVar357 = (float)uStack_1e8;
    fVar313 = (float)((ulong)uStack_1e8 >> 0x20);
    fVar295 = (float)local_1f0;
    fVar308 = (float)((ulong)local_1f0 >> 0x20);
    auVar213._0_4_ = fVar295 - local_200;
    auVar213._4_4_ = fVar308 - fStack_1fc;
    auVar213._8_4_ = fVar357 - fStack_1f8;
    auVar213._12_4_ = fVar313 - fStack_1f4;
    auVar310._0_4_ = local_1e0 - local_200;
    auVar310._4_4_ = fStack_1dc - fStack_1fc;
    auVar310._8_4_ = fStack_1d8 - fStack_1f8;
    auVar310._12_4_ = fStack_1d4 - fStack_1f4;
    auVar156 = NEON_ext(auVar310,auVar310,4,1);
    auVar253 = NEON_ext(auVar213,auVar213,4,1);
    auVar399._0_4_ = local_1e0 - fVar295;
    auVar399._4_4_ = fStack_1dc - fVar308;
    auVar399._8_4_ = fStack_1d8 - fVar357;
    auVar399._12_4_ = fStack_1d4 - fVar313;
    auVar368._0_4_ = local_210[0] - fVar295;
    auVar368._4_4_ = local_210[1] - fVar308;
    auVar368._8_4_ = local_210[2] - fVar357;
    auVar368._12_4_ = fStack_204 - fVar313;
    auVar232._0_4_ = local_200 - local_210[0];
    auVar232._4_4_ = fStack_1fc - local_210[1];
    auVar232._8_4_ = fStack_1f8 - local_210[2];
    auVar232._12_4_ = fStack_1f4 - fStack_204;
    auVar226._0_4_ = local_1e0 - local_210[0];
    auVar226._4_4_ = fStack_1dc - local_210[1];
    auVar226._8_4_ = fStack_1d8 - local_210[2];
    auVar226._12_4_ = fStack_1d4 - fStack_204;
    auVar252 = NEON_ext(auVar226,auVar226,4,1);
    auVar49._0_4_ = auVar213._0_4_ * auVar156._0_4_ - auVar310._0_4_ * auVar253._0_4_;
    auVar49._4_4_ = auVar213._4_4_ * auVar156._4_4_ - auVar310._4_4_ * auVar253._4_4_;
    auVar49._8_4_ = auVar213._8_4_ * auVar310._0_4_ - auVar310._8_4_ * auVar213._0_4_;
    auVar49._12_4_ = auVar213._12_4_ * auVar310._4_4_ - auVar310._12_4_ * auVar213._4_4_;
    auVar224 = NEON_ext(auVar49,auVar49,4,1);
    auVar156 = NEON_ext(auVar399,auVar399,4,1);
    fVar317 = fVar153 * (local_270 - local_1e0);
    fVar114 = fVar114 * (fStack_26c - fStack_1dc);
    fVar364 = fVar153 * (fStack_268 - fStack_1d8);
    auVar253 = NEON_ext(auVar368,auVar368,4,1);
    fVar363 = auVar224._0_4_;
    fVar329 = fVar317 * fVar363;
    fVar254 = auVar224._4_4_;
    auVar50._0_4_ = auVar368._0_4_ * auVar156._0_4_ - auVar399._0_4_ * auVar253._0_4_;
    auVar50._4_4_ = auVar368._4_4_ * auVar156._4_4_ - auVar399._4_4_ * auVar253._4_4_;
    auVar50._8_4_ = auVar368._8_4_ * auVar399._0_4_ - auVar399._8_4_ * auVar368._0_4_;
    auVar50._12_4_ = auVar368._12_4_ * auVar399._4_4_ - auVar399._12_4_ * auVar368._4_4_;
    auVar156 = NEON_ext(auVar50,auVar50,4,1);
    fVar289 = auVar156._4_4_;
    auVar253 = NEON_ext(auVar232,auVar232,4,1);
    fVar204 = auVar156._0_4_;
    auVar128._0_4_ = fVar204 * fVar204;
    auVar128._4_4_ = fVar289 * fVar289;
    auVar128._8_4_ = auVar50._0_4_ * auVar50._0_4_;
    auVar128._12_4_ = auVar50._4_4_ * auVar50._4_4_;
    fVar118 = auVar232._0_4_ * auVar252._0_4_ - auVar226._0_4_ * auVar253._0_4_;
    fVar212 = auVar232._4_4_ * auVar252._4_4_ - auVar226._4_4_ * auVar253._4_4_;
    auVar51._0_8_ = CONCAT44(fVar212,fVar118);
    auVar51._8_4_ = auVar232._8_4_ * auVar226._0_4_ - auVar226._8_4_ * auVar232._0_4_;
    auVar51._12_4_ = auVar232._12_4_ * auVar226._4_4_ - auVar226._12_4_ * auVar232._4_4_;
    auVar253 = NEON_ext(auVar51,auVar51,4,1);
    fVar205 = auVar253._0_4_;
    fVar288 = auVar253._4_4_;
    auVar165._8_8_ = auVar51._0_8_;
    auVar165._0_8_ = auVar253._0_8_;
    auVar166._4_12_ = auVar165._4_12_;
    auVar166._0_4_ = fVar329;
    auVar168._0_8_ = auVar166._0_8_;
    auVar168._8_4_ = fVar364 * auVar49._0_4_;
    auVar168._12_4_ = fVar212;
    auVar167._8_8_ = auVar168._8_8_;
    auVar167._4_4_ = fVar317 * fVar204;
    auVar167._0_4_ = fVar329;
    auVar169._0_12_ = auVar167._0_12_;
    auVar169._12_4_ = fVar364 * auVar50._0_4_;
    auVar253 = NEON_ext(auVar169,auVar169,8,1);
    fVar212 = auVar253._0_4_ + fVar114 * fVar254 + fVar329;
    fVar204 = auVar253._4_4_ + fVar114 * fVar289 + fVar317 * fVar204;
    fVar329 = fVar317 * fVar205 + fVar114 * fVar288 + fVar364 * fVar118;
    fVar317 = fVar317 * fVar205 + fVar114 * fVar288 + fVar364 * fVar118;
    fVar363 = fVar363 * fVar363;
    auVar129._4_12_ = auVar128._4_12_;
    auVar129._0_4_ = fVar363;
    auVar131._0_8_ = auVar129._0_8_;
    auVar131._8_4_ = auVar49._0_4_ * auVar49._0_4_;
    auVar131._12_4_ = auVar128._12_4_;
    auVar130._8_8_ = auVar131._8_8_;
    auVar130._4_4_ = auVar128._0_4_;
    auVar130._0_4_ = fVar363;
    auVar132._0_12_ = auVar130._0_12_;
    auVar132._12_4_ = auVar128._8_4_;
    auVar253 = NEON_ext(auVar132,auVar132,8,1);
    auVar95._0_4_ = auVar253._0_4_ + fVar254 * fVar254 + fVar363;
    auVar95._4_4_ = auVar253._4_4_ + fVar289 * fVar289 + auVar128._0_4_;
    fVar114 = fVar205 * fVar205 + fVar288 * fVar288 + fVar118 * fVar118;
    fVar118 = fVar205 * fVar205 + fVar288 * fVar288 + fVar118 * fVar118;
    auVar95._12_4_ = fVar118;
    auVar95._8_4_ = fVar114;
    auVar253 = NEON_frecpe(auVar95,4);
    iVar351 = -(uint)(auVar95._0_4_ == 0.0);
    iVar353 = -(uint)(auVar95._4_4_ == 0.0);
    iVar355 = -(uint)(fVar114 == 0.0);
    iVar83 = -(uint)(fVar118 == 0.0);
    auVar343[0] = ~(byte)iVar351;
    auVar343[1] = ~(byte)((uint)iVar351 >> 8);
    auVar343[2] = ~(byte)((uint)iVar351 >> 0x10);
    auVar343[3] = ~(byte)((uint)iVar351 >> 0x18);
    auVar343[4] = ~(byte)iVar353;
    auVar343[5] = ~(byte)((uint)iVar353 >> 8);
    auVar343[6] = ~(byte)((uint)iVar353 >> 0x10);
    auVar343[7] = ~(byte)((uint)iVar353 >> 0x18);
    auVar343[8] = ~(byte)iVar355;
    auVar343[9] = ~(byte)((uint)iVar355 >> 8);
    auVar343[10] = ~(byte)((uint)iVar355 >> 0x10);
    auVar343[0xb] = ~(byte)((uint)iVar355 >> 0x18);
    auVar343[0xc] = ~(byte)iVar83;
    auVar343[0xd] = ~(byte)((uint)iVar83 >> 8);
    auVar343[0xe] = ~(byte)((uint)iVar83 >> 0x10);
    auVar343[0xf] = ~(byte)((uint)iVar83 >> 0x18);
    auVar156 = NEON_frecps(auVar95,auVar253,4);
    auVar133._0_4_ = auVar253._0_4_ * auVar156._0_4_;
    auVar133._4_4_ = auVar253._4_4_ * auVar156._4_4_;
    auVar133._8_4_ = auVar253._8_4_ * auVar156._8_4_;
    auVar133._12_4_ = auVar253._12_4_ * auVar156._12_4_;
    auVar253 = NEON_frecps(auVar95,auVar133,4);
    auVar96._0_4_ = auVar133._0_4_ * auVar253._0_4_ * fVar212 * ABS(fVar212);
    auVar96._4_4_ = auVar133._4_4_ * auVar253._4_4_ * fVar204 * ABS(fVar204);
    auVar96._8_4_ = auVar133._8_4_ * auVar253._8_4_ * fVar329 * ABS(fVar329);
    auVar96._12_4_ = auVar133._12_4_ * auVar253._12_4_ * fVar317 * ABS(fVar317);
    auVar156 = auVar251 ^ (auVar251 ^ auVar96) & auVar343;
    auVar253 = NEON_ext(auVar156,auVar156,8,1);
    auVar339._0_8_ = auVar156._0_8_;
    uVar125 = NEON_fmaxp(auVar339._0_8_,auVar339._0_8_,4);
    uVar125 = NEON_fmax(CONCAT44(auVar253._0_4_,auVar253._0_4_),uVar125,4);
    fVar114 = (float)uVar125;
    if (9.9999994e-11 <= fVar114) {
      auVar344._0_4_ = auVar156._0_4_;
      cVar5 = PTR_DAT_043723d0
              [(-(uint)((float)((ulong)uVar125 >> 0x20) <= auVar156._4_4_) & 2) +
               (uint)(fVar114 <= auVar344._0_4_) | -(uint)(fVar114 <= auVar156._8_4_) & 4];
      if (cVar5 == '\x03') {
        auVar339 = auVar156._0_12_;
      }
      else {
        local_340 = (undefined4)uVar90;
        if (cVar5 == '\x02') {
          auVar339._8_4_ = local_340;
        }
        else if (cVar5 == '\x01') {
          auVar344._8_8_ = auVar156._8_8_;
          auVar344._4_4_ = local_340;
          auVar339 = auVar344._0_12_;
        }
        else {
          auVar345._4_12_ = auVar156._4_12_;
          auVar345._0_4_ = local_340;
          auVar339 = auVar345._0_12_;
        }
      }
      uVar125 = NEON_fmaxp(auVar339._0_8_,auVar339._0_8_,4);
      uVar125 = NEON_fmax(CONCAT44(auVar339._8_4_,auVar339._8_4_),uVar125,4);
      if (fVar114 <= (float)uVar125 * 1.1) {
        iVar351 = -(uint)(0.0 <= fVar329);
        iVar353 = -(uint)(0.0 <= fVar317);
        uVar316 = (uint)(-(0.0 <= fVar212) & bVar77);
        auVar41._0_8_ =
             CONCAT17((byte)(-(uint)(0.0 <= fVar204) >> 0x18) & bVar418,
                      (uint7)CONCAT14((byte)-(uint)(0.0 <= fVar204) & bVar78,uVar316));
        auVar41[8] = (byte)iVar351 & bVar420;
        auVar41[9] = (byte)((uint)iVar351 >> 8) & bVar421;
        auVar41[10] = (byte)((uint)iVar351 >> 0x10) & bVar422;
        auVar41[0xb] = (byte)((uint)iVar351 >> 0x18) & bVar424;
        auVar52[0xc] = (byte)iVar353 & bVar425;
        auVar52._0_12_ = auVar41;
        auVar52[0xd] = (byte)((uint)iVar353 >> 8) & bVar426;
        auVar52[0xe] = (byte)((uint)iVar353 >> 0x10) & bVar428;
        auVar52[0xf] = (byte)((uint)iVar353 >> 0x18) & bVar429;
        uVar316 = uVar316 + (int)((ulong)auVar41._0_8_ >> 0x20) + auVar41._8_4_ + auVar52._12_4_;
        if ((~uVar316 & 3) == 0) {
          auVar134._0_4_ = (local_270 - fVar295) * auVar368._0_4_;
          auVar134._4_4_ = (fStack_26c - fVar308) * auVar368._4_4_;
          auVar134._8_4_ = (fStack_268 - fVar357) * auVar368._8_4_;
          auVar134._12_4_ = (fStack_264 - fVar313) * auVar368._12_4_;
          auVar253 = NEON_ext(auVar134,auVar134,8,1);
          auVar97._0_4_ = (local_270 - fVar295) * (local_200 - fVar295);
          auVar97._4_4_ = (fStack_26c - fVar308) * (fStack_1fc - fVar308);
          auVar97._8_4_ = (fStack_268 - fVar357) * (fStack_1f8 - fVar357);
          auVar97._12_4_ = (fStack_264 - fVar313) * (fStack_1f4 - fVar313);
          auVar53._0_4_ = (local_200 - fVar295) * auVar399._0_4_;
          auVar53._4_4_ = (fStack_1fc - fVar308) * auVar399._4_4_;
          auVar53._8_4_ = (fStack_1f8 - fVar357) * auVar399._8_4_;
          auVar53._12_4_ = (fStack_1f4 - fVar313) * auVar399._12_4_;
          auVar156 = NEON_ext(auVar97,auVar97,8,1);
          auVar178._0_4_ = auVar368._0_4_ * auVar399._0_4_;
          auVar178._4_4_ = auVar368._4_4_ * auVar399._4_4_;
          auVar178._8_4_ = auVar368._8_4_ * auVar399._8_4_;
          auVar178._12_4_ = auVar368._12_4_ * auVar399._12_4_;
          auVar252 = NEON_ext(auVar178,auVar178,8,1);
          auVar224 = NEON_ext(auVar53,auVar53,8,1);
          uVar36 = 0xfffffffd;
          if ((auVar156._0_4_ + auVar97._0_4_ + auVar97._4_4_) *
              (auVar252._0_4_ + auVar178._0_4_ + auVar178._4_4_) <=
              (auVar253._0_4_ + auVar134._0_4_ + auVar134._4_4_) *
              (auVar224._0_4_ + auVar53._0_4_ + auVar53._4_4_)) {
            uVar36 = 0xfffffffe;
          }
          uVar316 = uVar36 & uVar316;
        }
        if ((~uVar316 & 6) == 0) {
          auVar136._0_4_ = (local_270 - local_210[0]) * auVar232._0_4_;
          auVar136._4_4_ = (fStack_26c - local_210[1]) * auVar232._4_4_;
          auVar136._8_4_ = (fStack_268 - local_210[2]) * auVar232._8_4_;
          auVar136._12_4_ = (fStack_264 - fStack_204) * auVar232._12_4_;
          auVar253 = NEON_ext(auVar136,auVar136,8,1);
          auVar99._0_4_ = (local_270 - local_210[0]) * (fVar295 - local_210[0]);
          auVar99._4_4_ = (fStack_26c - local_210[1]) * (fVar308 - local_210[1]);
          auVar99._8_4_ = (fStack_268 - local_210[2]) * (fVar357 - local_210[2]);
          auVar99._12_4_ = (fStack_264 - fStack_204) * (fVar313 - fStack_204);
          auVar55._0_4_ = (fVar295 - local_210[0]) * auVar226._0_4_;
          auVar55._4_4_ = (fVar308 - local_210[1]) * auVar226._4_4_;
          auVar55._8_4_ = (fVar357 - local_210[2]) * auVar226._8_4_;
          auVar55._12_4_ = (fVar313 - fStack_204) * auVar226._12_4_;
          auVar156 = NEON_ext(auVar99,auVar99,8,1);
          auVar182._0_4_ = auVar232._0_4_ * auVar226._0_4_;
          auVar182._4_4_ = auVar232._4_4_ * auVar226._4_4_;
          auVar182._8_4_ = auVar232._8_4_ * auVar226._8_4_;
          auVar182._12_4_ = auVar232._12_4_ * auVar226._12_4_;
          auVar252 = NEON_ext(auVar182,auVar182,8,1);
          auVar224 = NEON_ext(auVar55,auVar55,8,1);
          uVar36 = 0xfffffffb;
          if ((auVar156._0_4_ + auVar99._0_4_ + auVar99._4_4_) *
              (auVar252._0_4_ + auVar182._0_4_ + auVar182._4_4_) <=
              (auVar253._0_4_ + auVar136._0_4_ + auVar136._4_4_) *
              (auVar224._0_4_ + auVar55._0_4_ + auVar55._4_4_)) {
            uVar36 = 0xfffffffd;
          }
          uVar316 = uVar36 & uVar316;
        }
        if (((uVar316 ^ 0xffffffff) & 5) == 0) {
          auVar135._0_4_ = auVar213._0_4_ * (local_270 - local_200);
          auVar135._4_4_ = auVar213._4_4_ * (fStack_26c - fStack_1fc);
          auVar135._8_4_ = auVar213._8_4_ * (fStack_268 - fStack_1f8);
          auVar135._12_4_ = auVar213._12_4_ * (fStack_264 - fStack_1f4);
          auVar253 = NEON_ext(auVar135,auVar135,8,1);
          auVar98._0_4_ = (local_270 - local_200) * (local_210[0] - local_200);
          auVar98._4_4_ = (fStack_26c - fStack_1fc) * (local_210[1] - fStack_1fc);
          auVar98._8_4_ = (fStack_268 - fStack_1f8) * (local_210[2] - fStack_1f8);
          auVar98._12_4_ = (fStack_264 - fStack_1f4) * (fStack_204 - fStack_1f4);
          auVar54._0_4_ = (local_210[0] - local_200) * auVar310._0_4_;
          auVar54._4_4_ = (local_210[1] - fStack_1fc) * auVar310._4_4_;
          auVar54._8_4_ = (local_210[2] - fStack_1f8) * auVar310._8_4_;
          auVar54._12_4_ = (fStack_204 - fStack_1f4) * auVar310._12_4_;
          auVar156 = NEON_ext(auVar98,auVar98,8,1);
          auVar179._0_4_ = auVar213._0_4_ * auVar310._0_4_;
          auVar179._4_4_ = auVar213._4_4_ * auVar310._4_4_;
          auVar179._8_4_ = auVar213._8_4_ * auVar310._8_4_;
          auVar179._12_4_ = auVar213._12_4_ * auVar310._12_4_;
          auVar252 = NEON_ext(auVar179,auVar179,8,1);
          auVar224 = NEON_ext(auVar54,auVar54,8,1);
          uVar36 = 0xfffffffe;
          if ((auVar156._0_4_ + auVar98._0_4_ + auVar98._4_4_) *
              (auVar252._0_4_ + auVar179._0_4_ + auVar179._4_4_) <=
              (auVar253._0_4_ + auVar135._0_4_ + auVar135._4_4_) *
              (auVar224._0_4_ + auVar54._0_4_ + auVar54._4_4_)) {
            uVar36 = 0xfffffffb;
          }
          uVar316 = uVar36 & uVar316;
        }
        cVar5 = PTR_DAT_043723d8[(ulong)uVar316 & 7];
      }
      if (-1 < cVar5) {
        lVar28 = (long)(int)cVar5;
        local_210[lVar28 * 4 + 2] = fStack_1d8;
        local_210[lVar28 * 4 + 3] = fVar113;
        local_210[lVar28 * 4] = fVar356;
        local_210[lVar28 * 4 + 1] = fVar87;
        if (iVar335 == 4) {
          local_ac[0] = 3;
          goto switchD_001ccf14_caseD_22;
        }
        local_b0 = 3;
        goto switchD_001ccf14_caseD_14;
      }
    }
    goto LAB_001ce290;
  default:
    goto switchD_001ccf14_caseD_16;
  case 0x1a:
    goto switchD_001ccf14_caseD_1a;
  case 0x1b:
    goto switchD_001ccf14_caseD_1b;
  case 0x1c:
    pfVar30 = &local_270;
    pfVar33 = local_210;
  case 0x23:
                    /* WARNING: This code block may not be properly labeled as switch case */
    if (local_1a0 == 2) {
      auVar253 = *(undefined1 (*) [16])(pfVar33 + 4);
      fVar448 = pfVar33[8];
      fVar210 = pfVar33[9];
      fVar155 = pfVar33[10];
      fVar190 = pfVar33[0xb];
      fVar295 = auVar253._0_4_;
      auVar252._0_4_ = fVar295 - fVar448;
      fVar308 = auVar253._4_4_;
      auVar252._4_4_ = fVar308 - fVar210;
      fVar357 = auVar253._8_4_;
      auVar252._8_4_ = fVar357 - fVar155;
      fVar313 = auVar253._12_4_;
      auVar252._12_4_ = fVar313 - fVar190;
      fVar206 = *pfVar33;
      fVar209 = pfVar33[1];
      fVar354 = pfVar33[2];
      fVar356 = pfVar33[3];
      auVar156._0_4_ = fVar206 - fVar448;
      auVar156._4_4_ = fVar209 - fVar210;
      auVar156._8_4_ = fVar354 - fVar155;
      auVar156._12_4_ = fVar356 - fVar190;
      auVar230 = NEON_ext(auVar156,auVar156,4,1);
      fVar87 = *pfVar30;
      fVar113 = pfVar30[1];
      fVar118 = pfVar30[2];
      fVar212 = pfVar30[3];
      fVar289 = pfVar30[4];
      fVar204 = pfVar30[5];
      fVar205 = pfVar30[6];
      fVar288 = pfVar30[7];
      auVar224 = NEON_ext(auVar252,auVar252,4,1);
      fVar363 = auVar230._0_4_;
      fVar364 = auVar230._4_4_;
      fVar317 = auVar224._0_4_;
      fVar329 = auVar224._4_4_;
      auVar224._0_4_ = auVar252._0_4_ * fVar363 - auVar156._0_4_ * fVar317;
      auVar224._4_4_ = auVar252._4_4_ * fVar364 - auVar156._4_4_ * fVar329;
      auVar224._8_4_ = auVar252._8_4_ * auVar156._0_4_ - auVar156._8_4_ * auVar252._0_4_;
      auVar224._12_4_ = auVar252._12_4_ * auVar156._4_4_ - auVar156._12_4_ * auVar252._4_4_;
      auVar230 = NEON_ext(auVar224,auVar224,4,1);
      fVar254 = (fVar87 - fVar206) * auVar230._0_4_;
      fVar287 = (fVar113 - fVar209) * auVar230._4_4_;
      fVar291 = (fVar118 - fVar354) * auVar224._0_4_;
      fVar315 = (fVar289 - fVar206) * auVar230._0_4_;
      fVar327 = (fVar204 - fVar209) * auVar230._4_4_;
      fVar331 = (fVar205 - fVar354) * auVar224._0_4_;
      fVar255 = fVar254 + fVar287 + fVar291;
      fVar291 = fVar254 + fVar287 + fVar291;
      fVar254 = fVar315 + fVar327 + fVar331;
      fVar331 = fVar315 + fVar327 + fVar331;
      auVar230._0_4_ = fVar295 - fVar206;
      auVar230._4_4_ = fVar308 - fVar209;
      auVar230._8_4_ = fVar357 - fVar354;
      auVar230._12_4_ = fVar313 - fVar356;
      if (fVar255 * fVar254 < 0.0) {
        uVar125 = CONCAT44(fVar291 - fVar331,fVar255 - fVar254);
        uVar91 = NEON_frecpe(uVar125,4);
        uVar337 = NEON_frecps(uVar125,uVar91,4);
        auVar253 = NEON_ext(auVar230,auVar230,4,1);
        fVar254 = (float)uVar91 * (float)uVar337;
        fVar287 = (float)((ulong)uVar91 >> 0x20) * (float)((ulong)uVar337 >> 0x20);
        uVar125 = NEON_frecps(uVar125,CONCAT44(fVar287,fVar254),4);
        fVar255 = fVar255 * fVar254 * (float)uVar125;
        fVar291 = fVar291 * fVar287 * (float)((ulong)uVar125 >> 0x20);
        auVar411._0_4_ = fVar448 - fVar206;
        auVar411._4_4_ = fVar210 - fVar209;
        auVar411._8_4_ = fVar155 - fVar354;
        auVar411._12_4_ = fVar190 - fVar356;
        auVar224 = NEON_ext(auVar411,auVar411,4,1);
        auVar385._8_8_ = _UNK_03889f38;
        auVar385._0_8_ = _DAT_03889f30;
        fVar254 = fVar87 + (fVar289 - fVar87) * fVar255;
        fVar287 = fVar113 + (fVar204 - fVar113) * fVar291;
        fVar255 = fVar118 + (fVar205 - fVar118) * fVar255;
        fVar291 = fVar212 + (fVar288 - fVar212) * fVar291;
        auVar435._0_8_ =
             CONCAT44(auVar230._4_4_ * auVar224._4_4_ - auVar411._4_4_ * auVar253._4_4_,
                      auVar230._0_4_ * auVar224._0_4_ - auVar411._0_4_ * auVar253._0_4_);
        auVar435._8_4_ = auVar230._8_4_ * auVar411._0_4_ - auVar411._8_4_ * auVar230._0_4_;
        auVar435._12_4_ = auVar230._12_4_ * auVar411._4_4_ - auVar411._12_4_ * auVar230._4_4_;
        auVar253 = NEON_ext(auVar435,auVar435,4,1);
        auVar450._0_4_ = fVar206 - fVar254;
        auVar450._4_4_ = fVar209 - fVar287;
        auVar450._8_4_ = fVar354 - fVar255;
        auVar450._12_4_ = fVar356 - fVar291;
        auVar434._0_8_ = auVar253._0_8_;
        auVar434._8_8_ = auVar435._0_8_;
        auVar105._8_8_ = _UNK_03889f28;
        auVar105._0_8_ = _DAT_03889f20;
        auVar432._0_4_ = fVar295 - fVar254;
        auVar432._4_4_ = fVar308 - fVar287;
        auVar432._8_4_ = fVar357 - fVar255;
        auVar432._12_4_ = fVar313 - fVar291;
        auVar358._0_4_ = fVar448 - fVar254;
        auVar358._4_4_ = fVar210 - fVar287;
        auVar358._8_4_ = fVar155 - fVar255;
        auVar358._12_4_ = fVar190 - fVar291;
        auVar435 = a64_TBL(ZEXT816(0),auVar432,auVar385);
        auVar230 = a64_TBL(ZEXT816(0),auVar434,auVar105);
        auVar409 = a64_TBL(ZEXT816(0),auVar358,auVar385);
        auVar433 = a64_TBL(ZEXT816(0),auVar450,auVar385);
        auVar224 = a64_TBL(ZEXT816(0),auVar434,auVar385);
        auVar411 = a64_TBL(ZEXT816(0),auVar432,auVar105);
        fVar295 = auVar230._0_4_;
        fVar308 = auVar230._4_4_;
        fVar357 = auVar230._8_4_;
        auVar434 = a64_TBL(ZEXT816(0),auVar358,auVar105);
        auVar253 = a64_TBL(ZEXT816(0),auVar450,auVar105);
        fVar209 = auVar224._0_4_;
        fVar354 = auVar224._4_4_;
        fVar356 = auVar224._8_4_;
        auVar139._0_4_ = fVar295 * auVar433._0_4_ - fVar209 * auVar253._0_4_;
        auVar139._4_4_ = fVar308 * auVar433._4_4_ - fVar354 * auVar253._4_4_;
        auVar139._8_4_ = fVar357 * auVar433._8_4_ - fVar356 * auVar253._8_4_;
        auVar139._12_4_ = auVar230._12_4_ * auVar433._12_4_ - auVar224._12_4_ * auVar253._12_4_;
        fVar206 = auVar432._0_4_ * (fVar295 * auVar409._0_4_ - fVar209 * auVar434._0_4_);
        auVar433._4_12_ = auVar139._4_12_;
        auVar433._0_4_ = fVar206;
        auVar321._0_8_ = auVar433._0_8_;
        auVar321._8_4_ = auVar432._8_4_ * (fVar357 * auVar409._8_4_ - fVar356 * auVar434._8_4_);
        auVar321._12_4_ = auVar139._12_4_;
        auVar320._8_8_ = auVar321._8_8_;
        auVar320._4_4_ = auVar358._0_4_ * auVar139._0_4_;
        auVar320._0_4_ = fVar206;
        auVar322._0_12_ = auVar320._0_12_;
        auVar322._12_4_ = auVar358._8_4_ * auVar139._8_4_;
        auVar253 = NEON_ext(auVar322,auVar322,8,1);
        if (auVar250._8_4_ <
            auVar450._0_4_ * (fVar295 * auVar435._0_4_ - fVar209 * auVar411._0_4_) +
            auVar450._4_4_ * (fVar308 * auVar435._4_4_ - fVar354 * auVar411._4_4_) +
            auVar450._8_4_ * (fVar357 * auVar435._8_4_ - fVar356 * auVar411._8_4_) &&
            (auVar250._0_4_ <
             auVar253._0_4_ +
             auVar432._4_4_ * (fVar308 * auVar409._4_4_ - fVar354 * auVar434._4_4_) + fVar206 &&
            auVar250._4_4_ <
            auVar253._4_4_ + auVar358._4_4_ * auVar139._4_4_ + auVar358._0_4_ * auVar139._0_4_)) {
switchD_001ccf14_caseD_16:
                    /* WARNING: This code block may not be properly labeled as switch case */
          bVar12 = true;
          goto joined_r0x001ce298;
        }
LAB_001cd1fc:
        fVar288 = fVar288 - fVar212;
        fVar205 = fVar205 - fVar118;
        fVar204 = fVar204 - fVar113;
        fVar289 = fVar289 - fVar87;
        fVar357 = fVar448 - fVar87;
        fVar313 = fVar210 - fVar113;
        fVar254 = fVar155 - fVar118;
        fVar212 = fVar190 - fVar212;
        auVar8._4_4_ = fVar204;
        auVar8._0_4_ = fVar289;
        auVar8._8_4_ = fVar205;
        auVar8._12_4_ = fVar288;
        auVar9._4_4_ = fVar204;
        auVar9._0_4_ = fVar289;
        auVar9._8_4_ = fVar205;
        auVar9._12_4_ = fVar288;
        auVar253 = NEON_ext(auVar8,auVar9,4,1);
        auVar396._0_4_ = fVar289 * fVar289;
        auVar396._4_4_ = fVar204 * fVar204;
        auVar396._8_4_ = fVar205 * fVar205;
        auVar396._12_4_ = fVar288 * fVar288;
        auVar435 = NEON_ext(auVar396,auVar396,8,1);
        auVar410._0_4_ = fVar357 * fVar289;
        auVar410._4_4_ = fVar313 * fVar204;
        auVar410._8_4_ = fVar254 * fVar205;
        auVar410._12_4_ = fVar212 * fVar288;
        auVar340._0_4_ = auVar252._0_4_ * auVar252._0_4_;
        auVar340._4_4_ = auVar252._4_4_ * auVar252._4_4_;
        auVar340._8_4_ = auVar252._8_4_ * auVar252._8_4_;
        auVar340._12_4_ = auVar252._12_4_ * auVar252._12_4_;
        auVar224 = NEON_ext(auVar340,auVar340,8,1);
        auVar450 = NEON_ext(auVar410,auVar410,8,1);
        auVar386._0_4_ = auVar156._0_4_ * auVar156._0_4_;
        auVar386._4_4_ = auVar156._4_4_ * auVar156._4_4_;
        auVar386._8_4_ = auVar156._8_4_ * auVar156._8_4_;
        auVar386._12_4_ = auVar156._12_4_ * auVar156._12_4_;
        auVar207._0_4_ = auVar252._0_4_ * fVar357;
        auVar207._4_4_ = auVar252._4_4_ * fVar313;
        auVar207._8_4_ = auVar252._8_4_ * fVar254;
        auVar207._12_4_ = auVar252._12_4_ * fVar212;
        auVar359._0_4_ = auVar156._0_4_ * fVar357;
        auVar359._4_4_ = auVar156._4_4_ * fVar313;
        auVar359._8_4_ = auVar156._8_4_ * fVar254;
        auVar359._12_4_ = auVar156._12_4_ * fVar212;
        auVar230 = NEON_ext(auVar207,auVar207,8,1);
        auVar432 = NEON_ext(auVar386,auVar386,8,1);
        fVar255 = auVar252._0_4_ * auVar253._0_4_ - fVar317 * fVar289;
        fVar354 = auVar252._4_4_ * auVar253._4_4_ - fVar329 * fVar204;
        auVar323._0_8_ = CONCAT44(fVar354,fVar255);
        auVar323._8_4_ = auVar252._8_4_ * fVar289 - auVar252._0_4_ * fVar205;
        auVar323._12_4_ = auVar252._12_4_ * fVar204 - auVar252._4_4_ * fVar288;
        auVar358 = NEON_ext(auVar359,auVar359,8,1);
        fVar406 = auVar156._0_4_ * auVar253._0_4_ - fVar363 * fVar289;
        fVar189 = auVar156._4_4_ * auVar253._4_4_ - fVar364 * fVar204;
        auVar158._0_8_ = CONCAT44(fVar189,fVar406);
        auVar158._8_4_ = auVar156._8_4_ * fVar289 - auVar156._0_4_ * fVar205;
        auVar158._12_4_ = auVar156._12_4_ * fVar204 - auVar156._4_4_ * fVar288;
        auVar411 = NEON_ext(auVar323,auVar323,4,1);
        fVar212 = auVar435._0_4_ + auVar396._0_4_ + auVar396._4_4_;
        fVar288 = auVar450._0_4_ + auVar410._0_4_ + auVar410._4_4_;
        auVar257._0_8_ = CONCAT44(fVar288,fVar212);
        auVar253 = NEON_ext(auVar158,auVar158,4,1);
        fVar331 = auVar411._0_4_;
        fVar290 = auVar411._4_4_;
        fVar315 = auVar253._0_4_;
        fVar327 = auVar253._4_4_;
        fVar206 = auVar224._0_4_ + auVar340._0_4_ + auVar340._4_4_;
        fVar209 = auVar230._0_4_ + auVar207._0_4_ + auVar207._4_4_;
        auVar231._12_4_ = fVar209;
        auVar231._8_4_ = fVar206;
        fVar295 = auVar432._0_4_ + auVar386._0_4_ + auVar386._4_4_;
        fVar308 = auVar358._0_4_ + auVar359._0_4_ + auVar359._4_4_;
        auVar257._12_4_ = fVar308;
        auVar257._8_4_ = fVar295;
        uVar125 = NEON_ext(auVar411._0_8_,auVar323._0_8_,4,1);
        uVar91 = NEON_ext(auVar253._0_8_,auVar158._0_8_,4,1);
        auVar341._0_4_ = fVar317 * fVar331 - auVar252._0_4_ * (float)uVar125;
        auVar341._4_4_ = fVar329 * fVar290 - auVar252._4_4_ * (float)((ulong)uVar125 >> 0x20);
        auVar341._8_4_ = auVar252._0_4_ * fVar255 - auVar252._8_4_ * fVar331;
        auVar341._12_4_ = auVar252._4_4_ * fVar354 - auVar252._12_4_ * fVar290;
        fVar287 = auVar252._8_4_ * fVar205 + auVar252._0_4_ * fVar289 + auVar252._4_4_ * fVar204;
        fVar291 = auVar252._8_4_ * fVar205 + auVar252._0_4_ * fVar289 + auVar252._4_4_ * fVar204;
        auVar224 = NEON_frecpe(auVar257,4);
        auVar231._0_8_ = auVar257._0_8_;
        fVar354 = auVar156._8_4_ * fVar205 + auVar156._0_4_ * fVar289 + auVar156._4_4_ * fVar204;
        fVar356 = auVar156._8_4_ * fVar205 + auVar156._0_4_ * fVar289 + auVar156._4_4_ * fVar204;
        auVar360._0_4_ = fVar363 * fVar315 - auVar156._0_4_ * (float)uVar91;
        auVar360._4_4_ = fVar364 * fVar327 - auVar156._4_4_ * (float)((ulong)uVar91 >> 0x20);
        auVar360._8_4_ = auVar156._0_4_ * fVar406 - auVar156._8_4_ * fVar315;
        auVar360._12_4_ = auVar156._4_4_ * fVar189 - auVar156._12_4_ * fVar327;
        auVar253 = NEON_frecpe(auVar231,4);
        fVar317 = fVar331 * fVar331 + fVar290 * fVar290 + fVar255 * fVar255;
        fVar329 = fVar331 * fVar331 + fVar290 * fVar290 + fVar255 * fVar255;
        uVar91 = CONCAT44(fVar329,fVar317);
        auVar230 = NEON_frecps(auVar257,auVar224,4);
        auVar387._0_4_ = auVar224._0_4_ * auVar230._0_4_;
        auVar387._4_4_ = auVar224._4_4_ * auVar230._4_4_;
        auVar387._8_4_ = auVar224._8_4_ * auVar230._8_4_;
        auVar387._12_4_ = auVar224._12_4_ * auVar230._12_4_;
        auVar224 = NEON_frecps(auVar231,auVar253,4);
        fVar189 = fVar406 * fVar406 + fVar315 * fVar315 + fVar327 * fVar327;
        fVar406 = fVar406 * fVar406 + fVar315 * fVar315 + fVar327 * fVar327;
        uVar125 = CONCAT44(fVar406,fVar189);
        auVar451._0_4_ = auVar253._0_4_ * auVar224._0_4_;
        auVar451._4_4_ = auVar253._4_4_ * auVar224._4_4_;
        auVar451._8_4_ = auVar253._8_4_ * auVar224._8_4_;
        auVar451._12_4_ = auVar253._12_4_ * auVar224._12_4_;
        auVar253 = NEON_ext(auVar341,auVar341,4,1);
        uVar431 = NEON_frecpe(uVar125,4);
        auVar224 = NEON_ext(auVar360,auVar360,4,1);
        auVar230 = NEON_frecps(auVar257,auVar387,4);
        iVar335 = -(uint)(fVar212 == 0.0);
        iVar351 = -(uint)(fVar288 == 0.0);
        iVar353 = -(uint)(fVar295 == 0.0);
        iVar355 = -(uint)(fVar308 == 0.0);
        fVar315 = fVar357 * auVar253._0_4_;
        fVar327 = fVar313 * auVar253._4_4_;
        auVar253 = NEON_frecps(auVar231,auVar451,4);
        fVar357 = fVar357 * auVar224._0_4_;
        fVar313 = fVar313 * auVar224._4_4_;
        uVar337 = NEON_frecps(uVar125,uVar431,4);
        fVar295 = auVar387._0_4_ * auVar230._0_4_;
        fVar363 = auVar387._4_4_ * auVar230._4_4_;
        fVar364 = auVar387._8_4_ * auVar230._8_4_;
        fVar255 = auVar387._12_4_ * auVar230._12_4_;
        uVar375 = NEON_frecpe(uVar91,4);
        auVar258._0_4_ =
             (float)CONCAT13((byte)((uint)fVar295 >> 0x18) & ~(byte)((uint)iVar335 >> 0x18),
                             CONCAT12((byte)((uint)fVar295 >> 0x10) & ~(byte)((uint)iVar335 >> 0x10)
                                      ,CONCAT11((byte)((uint)fVar295 >> 8) &
                                                ~(byte)((uint)iVar335 >> 8),
                                                SUB41(fVar295,0) & ~(byte)iVar335)));
        auVar258[4] = SUB41(fVar363,0) & ~(byte)iVar351;
        auVar258[5] = (byte)((uint)fVar363 >> 8) & ~(byte)((uint)iVar351 >> 8);
        auVar258[6] = (byte)((uint)fVar363 >> 0x10) & ~(byte)((uint)iVar351 >> 0x10);
        auVar258[7] = (byte)((uint)fVar363 >> 0x18) & ~(byte)((uint)iVar351 >> 0x18);
        auVar258[8] = SUB41(fVar364,0) & ~(byte)iVar353;
        auVar258[9] = (byte)((uint)fVar364 >> 8) & ~(byte)((uint)iVar353 >> 8);
        auVar258[10] = (byte)((uint)fVar364 >> 0x10) & ~(byte)((uint)iVar353 >> 0x10);
        auVar258[0xb] = (byte)((uint)fVar364 >> 0x18) & ~(byte)((uint)iVar353 >> 0x18);
        auVar258[0xc] = SUB41(fVar255,0) & ~(byte)iVar355;
        auVar258[0xd] = (byte)((uint)fVar255 >> 8) & ~(byte)((uint)iVar355 >> 8);
        auVar258[0xe] = (byte)((uint)fVar255 >> 0x10) & ~(byte)((uint)iVar355 >> 0x10);
        auVar258[0xf] = (byte)((uint)fVar255 >> 0x18) & ~(byte)((uint)iVar355 >> 0x18);
        iVar335 = -(uint)(fVar212 == 0.0);
        iVar351 = -(uint)(fVar288 == 0.0);
        iVar353 = -(uint)(fVar206 == 0.0);
        iVar355 = -(uint)(fVar209 == 0.0);
        fVar206 = (float)uVar431 * (float)uVar337;
        fVar212 = (float)((ulong)uVar431 >> 0x20) * (float)((ulong)uVar337 >> 0x20);
        fVar295 = auVar451._0_4_ * auVar253._0_4_;
        fVar363 = auVar451._4_4_ * auVar253._4_4_;
        fVar364 = auVar451._8_4_ * auVar253._8_4_;
        fVar255 = auVar451._12_4_ * auVar253._12_4_;
        uVar337 = NEON_frecps(uVar91,uVar375,4);
        auVar361._0_4_ =
             (float)CONCAT13((byte)((uint)fVar295 >> 0x18) & ~(byte)((uint)iVar335 >> 0x18),
                             CONCAT12((byte)((uint)fVar295 >> 0x10) & ~(byte)((uint)iVar335 >> 0x10)
                                      ,CONCAT11((byte)((uint)fVar295 >> 8) &
                                                ~(byte)((uint)iVar335 >> 8),
                                                SUB41(fVar295,0) & ~(byte)iVar335)));
        auVar361[4] = SUB41(fVar363,0) & ~(byte)iVar351;
        auVar361[5] = (byte)((uint)fVar363 >> 8) & ~(byte)((uint)iVar351 >> 8);
        auVar361[6] = (byte)((uint)fVar363 >> 0x10) & ~(byte)((uint)iVar351 >> 0x10);
        auVar361[7] = (byte)((uint)fVar363 >> 0x18) & ~(byte)((uint)iVar351 >> 0x18);
        auVar361[8] = SUB41(fVar364,0) & ~(byte)iVar353;
        auVar361[9] = (byte)((uint)fVar364 >> 8) & ~(byte)((uint)iVar353 >> 8);
        auVar361[10] = (byte)((uint)fVar364 >> 0x10) & ~(byte)((uint)iVar353 >> 0x10);
        auVar361[0xb] = (byte)((uint)fVar364 >> 0x18) & ~(byte)((uint)iVar353 >> 0x18);
        auVar361[0xc] = SUB41(fVar255,0) & ~(byte)iVar355;
        auVar361[0xd] = (byte)((uint)fVar255 >> 8) & ~(byte)((uint)iVar355 >> 8);
        auVar361[0xe] = (byte)((uint)fVar255 >> 0x10) & ~(byte)((uint)iVar355 >> 0x10);
        auVar361[0xf] = (byte)((uint)fVar255 >> 0x18) & ~(byte)((uint)iVar355 >> 0x18);
        fVar295 = (float)uVar375 * (float)uVar337;
        fVar363 = (float)((ulong)uVar375 >> 0x20) * (float)((ulong)uVar337 >> 0x20);
        uVar91 = NEON_frecps(uVar91,CONCAT44(fVar363,fVar295),4);
        uVar125 = NEON_frecps(uVar125,CONCAT44(fVar212,fVar206),4);
        iVar353 = -(uint)(fVar317 == 0.0);
        iVar355 = -(uint)(fVar329 == 0.0);
        iVar335 = -(uint)(fVar189 == 0.0);
        iVar351 = -(uint)(fVar406 == 0.0);
        uVar318 = CONCAT17(~(byte)((uint)iVar355 >> 0x18),
                           CONCAT16(~(byte)((uint)iVar355 >> 0x10),
                                    CONCAT15(~(byte)((uint)iVar355 >> 8),
                                             CONCAT14(~(byte)iVar355,
                                                      CONCAT13(~(byte)((uint)iVar353 >> 0x18),
                                                               CONCAT12(~(byte)((uint)iVar353 >>
                                                                               0x10),
                                                                        CONCAT11(~(byte)((uint)
                                                  iVar353 >> 8),~(byte)iVar353)))))));
        uVar376 = CONCAT44(fVar363 * (float)((ulong)uVar91 >> 0x20),fVar295 * (float)uVar91) &
                  uVar318;
        uVar34 = CONCAT17(~(byte)((uint)iVar351 >> 0x18),
                          CONCAT16(~(byte)((uint)iVar351 >> 0x10),
                                   CONCAT15(~(byte)((uint)iVar351 >> 8),
                                            CONCAT14(~(byte)iVar351,
                                                     CONCAT13(~(byte)((uint)iVar335 >> 0x18),
                                                              CONCAT12(~(byte)((uint)iVar335 >> 0x10
                                                                              ),CONCAT11(~(byte)((
                                                  uint)iVar335 >> 8),~(byte)iVar335)))))));
        fVar295 = (float)uVar376 * (fVar315 + fVar327 + fVar254 * auVar341._0_4_);
        fVar317 = (float)(uVar376 >> 0x20) * (fVar315 + fVar327 + fVar254 * auVar341._0_4_);
        uVar376 = CONCAT44(fVar212 * (float)((ulong)uVar125 >> 0x20),fVar206 * (float)uVar125) &
                  uVar34;
        fVar406 = (float)uVar376 * (fVar254 * auVar360._0_4_ + fVar357 + fVar313);
        fVar189 = (float)(uVar376 >> 0x20) * (fVar254 * auVar360._0_4_ + fVar357 + fVar313);
        auVar253 = NEON_ext(auVar258,auVar258,8,1);
        uVar309 = NEON_fmax(uVar148,uVar150 ^ (uVar150 ^ CONCAT44(fVar189,fVar406)) &
                                              CONCAT44(-(uint)(fVar189 < fVar114),
                                                       -(uint)(fVar406 < fVar153)),4);
        uVar377 = NEON_fmax(uVar148,uVar150 ^ (uVar150 ^ CONCAT44(fVar317,fVar295)) &
                                              CONCAT44(-(uint)(fVar317 < fVar114),
                                                       -(uint)(fVar295 < fVar153)),4);
        auVar224 = NEON_ext(auVar361,auVar361,8,1);
        fVar406 = ((float)uVar377 * fVar287 - fVar209) * auVar224._0_4_;
        fVar189 = ((float)(uVar377 >> 0x20) * fVar291 - fVar209) * auVar224._0_4_;
        fVar212 = ((float)uVar309 * fVar354 - fVar308) * auVar253._0_4_;
        fVar295 = ((float)(uVar309 >> 0x20) * fVar356 - fVar308) * auVar253._0_4_;
        uVar125 = NEON_fmax(uVar148,uVar150 ^ (uVar150 ^ CONCAT44(fVar189,fVar406)) &
                                              CONCAT44(-(uint)(fVar189 < fVar114),
                                                       -(uint)(fVar406 < fVar153)),4);
        uVar91 = NEON_fmax(uVar148,uVar150 ^ (uVar150 ^ CONCAT44(fVar295,fVar212)) &
                                             CONCAT44(-(uint)(fVar295 < fVar114),
                                                      -(uint)(fVar212 < fVar153)),4);
        fVar308 = (float)uVar125;
        fVar313 = (float)((ulong)uVar125 >> 0x20);
        fVar329 = (float)uVar91;
        fVar363 = (float)((ulong)uVar91 >> 0x20);
        fVar357 = (fVar288 + fVar287 * fVar308) * auVar361._0_4_;
        fVar317 = (fVar288 + fVar291 * fVar313) * auVar361._0_4_;
        fVar206 = (fVar288 + fVar354 * fVar329) * auVar258._0_4_;
        fVar209 = (fVar288 + fVar356 * fVar363) * auVar258._0_4_;
        uVar338 = NEON_fmax(uVar148,uVar150 ^ (uVar150 ^ CONCAT44(fVar317,fVar357)) &
                                              CONCAT44(-(uint)(fVar317 < fVar114),
                                                       -(uint)(fVar357 < fVar153)),4);
        uVar376 = NEON_fmax(uVar148,uVar150 ^ (uVar150 ^ CONCAT44(fVar209,fVar206)) &
                                              CONCAT44(-(uint)(fVar209 < fVar114),
                                                       -(uint)(fVar206 < fVar153)),4);
        uVar338 = uVar338 ^ (uVar338 ^ uVar377) &
                            CONCAT44(-(uint)(fVar313 == fVar189),-(uint)(fVar308 == fVar406)) &
                            uVar318;
        uVar376 = uVar376 ^ (uVar376 ^ uVar309) &
                            CONCAT44(-(uint)(fVar363 == fVar295),-(uint)(fVar329 == fVar212)) &
                            uVar34;
        fVar189 = (float)uVar338;
        fVar406 = (float)uVar376;
        fVar209 = (fVar87 + fVar289 * fVar189) - (fVar448 + auVar252._0_4_ * fVar308);
        fVar354 = (fVar113 + fVar204 * (float)(uVar338 >> 0x20)) -
                  (fVar210 + auVar252._4_4_ * fVar313);
        fVar356 = (fVar118 + fVar205 * fVar189) - (fVar155 + auVar252._8_4_ * fVar308);
        fVar189 = (fVar87 + fVar289 * fVar406) - (fVar448 + auVar156._0_4_ * fVar329);
        fVar206 = (fVar113 + fVar204 * (float)(uVar376 >> 0x20)) -
                  (fVar210 + auVar156._4_4_ * fVar363);
        fVar406 = (fVar118 + fVar205 * fVar406) - (fVar155 + auVar156._8_4_ * fVar329);
        fVar209 = fVar209 * fVar209;
        fVar354 = fVar354 * fVar354;
        fVar356 = fVar356 * fVar356;
        fVar189 = fVar189 * fVar189;
        fVar206 = fVar206 * fVar206;
        fVar406 = fVar406 * fVar406;
        uVar34 = CONCAT44(-(uint)(fVar189 + fVar206 + fVar406 < fVar209 + fVar354 + fVar356),
                          -(uint)(fVar189 + fVar206 + fVar406 < fVar209 + fVar354 + fVar356));
        *(ulong *)(pfVar33 + 2) =
             *(ulong *)(pfVar33 + 6) ^ (*(ulong *)(pfVar33 + 6) ^ *(ulong *)(pfVar33 + 2)) & uVar34;
        *(ulong *)pfVar33 =
             *(ulong *)(pfVar33 + 4) ^ (*(ulong *)(pfVar33 + 4) ^ *(ulong *)pfVar33) & uVar34;
        pfVar33[6] = fVar155;
        pfVar33[7] = fVar190;
        pfVar33[4] = fVar448;
        pfVar33[5] = fVar210;
        goto switchD_001cd6ec_caseD_3;
      }
      uVar316 = -(uint)(fVar255 * fVar255 < fVar254 * fVar254);
      uVar328 = -(uint)(fVar291 * fVar291 < fVar331 * fVar331);
      auVar409._0_4_ = fVar448 - fVar295;
      auVar409._4_4_ = fVar210 - fVar308;
      auVar409._8_4_ = fVar155 - fVar357;
      auVar409._12_4_ = fVar190 - fVar313;
      auVar224 = NEON_ext(auVar409,auVar409,4,1);
      auVar450 = NEON_ext(auVar230,auVar230,4,1);
      fVar254 = (float)((uint)fVar289 ^ ((uint)fVar289 ^ (uint)fVar87) & uVar316);
      fVar255 = (float)((uint)fVar204 ^ ((uint)fVar204 ^ (uint)fVar113) & uVar328);
      fVar287 = (float)((uint)fVar205 ^ ((uint)fVar205 ^ (uint)fVar118) & uVar316);
      fVar291 = (float)((uint)fVar288 ^ ((uint)fVar288 ^ (uint)fVar212) & uVar328);
      auVar379._0_4_ = fVar254 - fVar295;
      auVar379._4_4_ = fVar255 - fVar308;
      auVar379._8_4_ = fVar287 - fVar357;
      auVar379._12_4_ = fVar291 - fVar313;
      auVar432 = NEON_ext(auVar379,auVar379,4,1);
      auVar395._0_4_ = fVar254 - fVar448;
      auVar395._4_4_ = fVar255 - fVar210;
      auVar395._8_4_ = fVar287 - fVar155;
      auVar395._12_4_ = fVar291 - fVar190;
      auVar408._0_4_ = fVar254 - fVar206;
      auVar408._4_4_ = fVar255 - fVar209;
      auVar408._8_4_ = fVar287 - fVar354;
      auVar408._12_4_ = fVar291 - fVar356;
      fVar295 = auVar409._0_4_ * fVar363 - auVar156._0_4_ * auVar224._0_4_;
      fVar308 = auVar409._4_4_ * fVar364 - auVar156._4_4_ * auVar224._4_4_;
      auVar296._0_8_ = CONCAT44(fVar308,fVar295);
      auVar296._8_4_ = auVar409._8_4_ * auVar156._0_4_ - auVar156._8_4_ * auVar409._0_4_;
      auVar296._12_4_ = auVar409._12_4_ * auVar156._4_4_ - auVar156._12_4_ * auVar409._4_4_;
      auVar358 = NEON_ext(auVar296,auVar296,4,1);
      auVar191._0_4_ = auVar224._0_4_ * auVar379._0_4_ - auVar409._0_4_ * auVar432._0_4_;
      auVar191._4_4_ = auVar224._4_4_ * auVar379._4_4_ - auVar409._4_4_ * auVar432._4_4_;
      auVar191._8_4_ = auVar409._0_4_ * auVar379._8_4_ - auVar409._8_4_ * auVar379._0_4_;
      auVar191._12_4_ = auVar409._4_4_ * auVar379._12_4_ - auVar409._12_4_ * auVar379._4_4_;
      auVar432 = NEON_ext(auVar191,auVar191,4,1);
      in_q8._8_8_ = auVar296._0_8_;
      in_q8._0_8_ = auVar358._0_8_;
      fVar313 = auVar358._4_4_;
      auVar224 = NEON_ext(auVar395,auVar395,4,1);
      fVar189 = auVar358._0_4_;
      auVar380._0_4_ = fVar189 * auVar432._0_4_;
      auVar380._4_4_ = fVar313 * auVar432._4_4_;
      auVar380._8_4_ = fVar295 * auVar191._0_4_;
      auVar380._12_4_ = fVar308 * auVar191._4_4_;
      auVar192._0_4_ = fVar363 * auVar395._0_4_ - auVar156._0_4_ * auVar224._0_4_;
      auVar192._4_4_ = fVar364 * auVar395._4_4_ - auVar156._4_4_ * auVar224._4_4_;
      auVar192._8_4_ = auVar156._0_4_ * auVar395._8_4_ - auVar156._8_4_ * auVar395._0_4_;
      auVar192._12_4_ = auVar156._4_4_ * auVar395._12_4_ - auVar156._12_4_ * auVar395._4_4_;
      auVar358 = NEON_ext(auVar192,auVar192,4,1);
      auVar224 = NEON_ext(auVar408,auVar408,4,1);
      auVar193._0_4_ = auVar450._0_4_ * auVar408._0_4_ - auVar230._0_4_ * auVar224._0_4_;
      auVar193._4_4_ = auVar450._4_4_ * auVar408._4_4_ - auVar230._4_4_ * auVar224._4_4_;
      auVar193._8_4_ = auVar230._0_4_ * auVar408._8_4_ - auVar230._8_4_ * auVar408._0_4_;
      auVar193._12_4_ = auVar230._4_4_ * auVar408._12_4_ - auVar230._12_4_ * auVar408._4_4_;
      auVar224 = NEON_ext(auVar193,auVar193,4,1);
      fVar406 = fVar189 * auVar358._0_4_;
      auVar381._4_12_ = auVar380._4_12_;
      auVar381._0_4_ = auVar380._0_4_;
      auVar383._0_8_ = auVar381._0_8_;
      auVar383._8_4_ = auVar380._8_4_;
      auVar383._12_4_ = auVar380._12_4_;
      auVar382._8_8_ = auVar383._8_8_;
      auVar382._4_4_ = fVar406;
      auVar382._0_4_ = auVar380._0_4_;
      auVar384._0_12_ = auVar382._0_12_;
      auVar384._12_4_ = fVar295 * auVar192._0_4_;
      fVar357 = fVar189 * auVar224._0_4_;
      fVar315 = fVar313 * auVar224._4_4_;
      auVar224 = NEON_ext(auVar384,auVar384,8,1);
      fVar327 = auVar224._0_4_ + fVar313 * auVar432._4_4_ + auVar380._0_4_;
      fVar331 = auVar224._4_4_ + fVar313 * auVar358._4_4_ + fVar406;
      auVar367._0_8_ = CONCAT44(fVar331,fVar327);
      fVar406 = fVar295 * auVar193._0_4_ + fVar357 + fVar315;
      uStack_1a8 = CONCAT44(fVar295 * auVar193._0_4_ + fVar357 + fVar315,fVar406);
      auVar367._8_8_ = uStack_1a8;
      if ((byte)((-(fVar331 < 0.0) & 2U) + (fVar327 < 0.0) | -(fVar406 < 0.0) & 4U) != 7) {
        local_1b0 = auVar367._0_8_;
        goto LAB_001cd1fc;
      }
      auVar199._0_4_ = fVar189 * (local_270 - local_210[0]);
      auVar199._4_4_ = fVar313 * (fStack_26c - local_210[1]);
      auVar199._8_4_ = fVar295 * (fStack_268 - local_210[2]);
      auVar199._12_4_ = fVar308 * (fStack_264 - fStack_204);
      auVar156 = NEON_ext(auVar199,auVar199,8,1);
      if (auVar199._0_4_ + auVar199._4_4_ + auVar156._0_4_ < 0.0) {
        in_q8._0_4_ = -fVar189;
        in_q8._4_4_ = -fVar313;
        in_q8._8_4_ = -fVar295;
        in_q8._12_4_ = -fVar308;
        *(long *)(pfVar33 + 2) = auVar253._8_8_;
        *(long *)pfVar33 = auVar253._0_8_;
        pfVar33[6] = fVar354;
        pfVar33[7] = fVar356;
        pfVar33[4] = fVar206;
        pfVar33[5] = fVar209;
        auVar164._8_8_ = _UNK_03888fb8;
        auVar164._0_8_ = _DAT_03888fb0;
        auVar367 = a64_TBL(ZEXT816(0),auVar367,auVar164);
      }
      uStack_1a8 = auVar367._8_8_;
      local_1b0 = auVar367._0_8_;
      pfVar30[2] = fVar287;
      pfVar30[3] = fVar291;
      *pfVar30 = fVar254;
      pfVar30[1] = fVar255;
      uVar316 = 1;
      if (iVar335 == 2) goto LAB_001cdbd8;
      goto LAB_001cdfd4;
    }
    fVar448 = *pfVar30;
    fVar210 = pfVar30[1];
    fVar155 = pfVar30[2];
    fVar190 = pfVar30[4];
    fVar206 = pfVar30[5];
    fVar209 = pfVar30[6];
    fVar354 = pfVar30[7];
    fVar356 = *pfVar33;
    fVar87 = pfVar33[1];
    fVar113 = pfVar33[2];
    fVar118 = pfVar33[3];
    auVar319._0_4_ = fVar190 - fVar356;
    auVar319._4_4_ = fVar206 - fVar87;
    auVar319._8_4_ = fVar209 - fVar113;
    auVar319._12_4_ = fVar354 - fVar118;
    auVar19._8_8_ = uStack_1a8;
    auVar19._0_8_ = local_1b0;
    fVar288 = in_q8._0_4_ * auVar319._0_4_;
    fVar295 = in_q8._4_4_ * auVar319._4_4_;
    fVar308 = in_q8._8_4_ * auVar319._8_4_;
    fVar212 = in_q8._0_4_ * (fVar448 - fVar356);
    fVar204 = in_q8._4_4_ * (fVar210 - fVar87);
    fVar205 = in_q8._8_4_ * (fVar155 - fVar113);
    fVar289 = fVar212 + fVar204 + fVar205;
    fVar205 = fVar212 + fVar204 + fVar205;
    fVar212 = fVar288 + fVar295 + fVar308;
    if (fVar289 * fVar212 < 0.0) {
      uVar337 = CONCAT44(fVar205 - (fVar288 + fVar295 + fVar308),fVar289 - fVar212);
      auVar388._8_8_ = _UNK_03889f28;
      auVar388._0_8_ = _DAT_03889f20;
      uVar375 = NEON_frecpe(uVar337,4);
      auVar253 = *(undefined1 (*) [16])(pfVar33 + 4);
      fVar212 = pfVar33[8];
      fVar204 = pfVar33[9];
      fVar288 = pfVar33[10];
      fVar295 = pfVar33[0xb];
      uVar431 = NEON_frecps(uVar337,uVar375,4);
      fVar308 = (float)uVar375 * (float)uVar431;
      fVar357 = (float)((ulong)uVar375 >> 0x20) * (float)((ulong)uVar431 >> 0x20);
      uVar337 = NEON_frecps(uVar337,CONCAT44(fVar357,fVar308),4);
      fVar289 = fVar289 * fVar308 * (float)uVar337;
      fVar205 = fVar205 * fVar357 * (float)((ulong)uVar337 >> 0x20);
      auVar436._8_8_ = _UNK_03889f38;
      auVar436._0_8_ = _DAT_03889f30;
      auVar259._0_4_ = fVar212 - fVar356;
      auVar259._4_4_ = fVar204 - fVar87;
      auVar259._8_4_ = fVar288 - fVar113;
      auVar259._12_4_ = fVar295 - fVar118;
      auVar156 = NEON_ext(auVar259,auVar259,4,1);
      fVar448 = fVar448 + (fVar190 - fVar448) * fVar289;
      fVar210 = fVar210 + (fVar206 - fVar210) * fVar205;
      fVar155 = fVar155 + (fVar209 - fVar155) * fVar289;
      fVar308 = pfVar30[3] + (fVar354 - pfVar30[3]) * fVar205;
      fVar289 = auVar253._0_4_ - fVar356;
      fVar205 = auVar253._4_4_ - fVar87;
      auVar157._0_8_ = CONCAT44(fVar205,fVar289);
      auVar157._8_4_ = auVar253._8_4_ - fVar113;
      auVar157._12_4_ = auVar253._12_4_ - fVar118;
      auVar252 = NEON_ext(auVar157,auVar157,4,1);
      auVar362._0_4_ = auVar253._0_4_ - fVar448;
      auVar362._4_4_ = auVar253._4_4_ - fVar210;
      auVar362._8_4_ = auVar253._8_4_ - fVar155;
      auVar362._12_4_ = auVar253._12_4_ - fVar308;
      auVar366._0_8_ = auVar252._0_8_;
      auVar366._8_8_ = auVar157._0_8_;
      auVar411 = a64_TBL(ZEXT816(0),auVar362,auVar436);
      auVar260._0_8_ =
           CONCAT44(fVar205 * auVar156._4_4_ - auVar259._4_4_ * auVar252._4_4_,
                    fVar289 * auVar156._0_4_ - auVar259._0_4_ * auVar252._0_4_);
      auVar260._8_4_ = auVar157._8_4_ * auVar259._0_4_ - auVar259._8_4_ * fVar289;
      auVar260._12_4_ = auVar157._12_4_ * auVar259._4_4_ - auVar259._12_4_ * fVar205;
      auVar156 = NEON_ext(auVar260,auVar260,4,1);
      auVar297._0_8_ = auVar156._0_8_;
      auVar297._8_8_ = auVar260._0_8_;
      auVar261._0_4_ = fVar356 - fVar448;
      auVar261._4_4_ = fVar87 - fVar210;
      auVar261._8_4_ = fVar113 - fVar155;
      auVar261._12_4_ = fVar118 - fVar308;
      auVar194._0_4_ = fVar212 - fVar448;
      auVar194._4_4_ = fVar204 - fVar210;
      auVar194._8_4_ = fVar288 - fVar155;
      auVar194._12_4_ = fVar295 - fVar308;
      auVar156 = a64_TBL(ZEXT816(0),auVar194,auVar436);
      auVar358 = a64_TBL(ZEXT816(0),auVar297,auVar388);
      auVar252 = a64_TBL(ZEXT816(0),auVar261,auVar436);
      auVar230 = a64_TBL(ZEXT816(0),auVar297,auVar436);
      auVar450 = a64_TBL(ZEXT816(0),auVar362,auVar388);
      fVar205 = auVar358._0_4_;
      fVar308 = auVar358._4_4_;
      fVar357 = auVar358._8_4_;
      auVar224 = a64_TBL(ZEXT816(0),auVar194,auVar388);
      auVar432 = a64_TBL(ZEXT816(0),auVar261,auVar388);
      fVar448 = auVar230._0_4_;
      fVar210 = auVar230._4_4_;
      fVar155 = auVar230._8_4_;
      auVar298._0_4_ = fVar205 * auVar252._0_4_ - fVar448 * auVar432._0_4_;
      auVar298._4_4_ = fVar308 * auVar252._4_4_ - fVar210 * auVar432._4_4_;
      auVar298._8_4_ = fVar357 * auVar252._8_4_ - fVar155 * auVar432._8_4_;
      auVar298._12_4_ = auVar358._12_4_ * auVar252._12_4_ - auVar230._12_4_ * auVar432._12_4_;
      fVar289 = auVar362._0_4_ * (fVar205 * auVar156._0_4_ - fVar448 * auVar224._0_4_);
      auVar299._4_12_ = auVar298._4_12_;
      auVar299._0_4_ = fVar289;
      auVar301._0_8_ = auVar299._0_8_;
      auVar301._8_4_ = auVar362._8_4_ * (fVar357 * auVar156._8_4_ - fVar155 * auVar224._8_4_);
      auVar301._12_4_ = auVar298._12_4_;
      auVar300._8_8_ = auVar301._8_8_;
      auVar300._4_4_ = auVar194._0_4_ * auVar298._0_4_;
      auVar300._0_4_ = fVar289;
      auVar302._0_12_ = auVar300._0_12_;
      auVar302._12_4_ = auVar194._8_4_ * auVar298._8_4_;
      auVar252 = NEON_ext(auVar302,auVar302,8,1);
      if (auVar261._0_4_ * (fVar205 * auVar411._0_4_ - fVar448 * auVar450._0_4_) +
          auVar261._4_4_ * (fVar308 * auVar411._4_4_ - fVar210 * auVar450._4_4_) +
          auVar261._8_4_ * (fVar357 * auVar411._8_4_ - fVar155 * auVar450._8_4_) <= auVar250._8_4_
          || (auVar252._0_4_ +
              auVar362._4_4_ * (fVar308 * auVar156._4_4_ - fVar210 * auVar224._4_4_) + fVar289 <=
              auVar250._0_4_ ||
             auVar252._4_4_ + auVar194._4_4_ * auVar298._4_4_ + auVar194._0_4_ * auVar298._0_4_ <=
             auVar250._4_4_)) goto LAB_001cd5e4;
LAB_001ce290:
      bVar12 = true;
      goto joined_r0x001ce298;
    }
    auVar253 = *(undefined1 (*) [16])(pfVar33 + 4);
    fVar212 = pfVar33[8];
    fVar204 = pfVar33[9];
    fVar288 = pfVar33[10];
    fVar295 = pfVar33[0xb];
    auVar157._0_8_ = CONCAT44(auVar253._4_4_ - fVar87,auVar253._0_4_ - fVar356);
    auVar157._8_4_ = auVar253._8_4_ - fVar113;
    auVar157._12_4_ = auVar253._12_4_ - fVar118;
    auVar156 = NEON_ext(auVar157,auVar157,4,1);
    auVar366._0_8_ = auVar156._0_8_;
    auVar366._8_8_ = auVar157._0_8_;
LAB_001cd5e4:
    auVar195._0_4_ = fVar212 - auVar253._0_4_;
    auVar195._4_4_ = fVar204 - auVar253._4_4_;
    auVar195._8_4_ = fVar288 - auVar253._8_4_;
    auVar195._12_4_ = fVar295 - auVar253._12_4_;
    auVar156 = NEON_ext(auVar195,auVar195,4,1);
    auVar262._0_4_ = fVar356 - fVar212;
    auVar262._4_4_ = fVar87 - fVar204;
    auVar262._8_4_ = fVar113 - fVar288;
    auVar262._12_4_ = fVar118 - fVar295;
    auVar224 = NEON_ext(auVar262,auVar262,4,1);
    auVar397._0_4_ = fVar190 - auVar253._0_4_;
    auVar397._4_4_ = fVar206 - auVar253._4_4_;
    auVar397._8_4_ = fVar209 - auVar253._8_4_;
    auVar397._12_4_ = fVar354 - auVar253._12_4_;
    auVar253 = NEON_ext(auVar397,auVar397,4,1);
    auVar437._0_4_ = fVar190 - fVar212;
    auVar437._4_4_ = fVar206 - fVar204;
    auVar437._8_4_ = fVar209 - fVar288;
    auVar437._12_4_ = fVar354 - fVar295;
    auVar196._0_4_ = auVar397._0_4_ * auVar156._0_4_ - auVar195._0_4_ * auVar253._0_4_;
    auVar196._4_4_ = auVar397._4_4_ * auVar156._4_4_ - auVar195._4_4_ * auVar253._4_4_;
    auVar196._8_4_ = auVar397._8_4_ * auVar195._0_4_ - auVar195._8_4_ * auVar397._0_4_;
    auVar196._12_4_ = auVar397._12_4_ * auVar195._4_4_ - auVar195._12_4_ * auVar397._4_4_;
    auVar252 = NEON_ext(auVar196,auVar196,4,1);
    auVar342._0_4_ = auVar195._0_4_ * auVar224._0_4_ - auVar262._0_4_ * auVar156._0_4_;
    auVar342._4_4_ = auVar195._4_4_ * auVar224._4_4_ - auVar262._4_4_ * auVar156._4_4_;
    auVar342._8_4_ = auVar195._8_4_ * auVar262._0_4_ - auVar262._8_4_ * auVar195._0_4_;
    auVar342._12_4_ = auVar195._12_4_ * auVar262._4_4_ - auVar262._12_4_ * auVar195._4_4_;
    auVar230 = NEON_ext(auVar342,auVar342,4,1);
    auVar253 = NEON_ext(auVar437,auVar437,4,1);
    auVar197._0_4_ = auVar437._0_4_ * auVar224._0_4_ - auVar262._0_4_ * auVar253._0_4_;
    auVar197._4_4_ = auVar437._4_4_ * auVar224._4_4_ - auVar262._4_4_ * auVar253._4_4_;
    auVar197._8_4_ = auVar437._8_4_ * auVar262._0_4_ - auVar262._8_4_ * auVar437._0_4_;
    auVar197._12_4_ = auVar437._12_4_ * auVar262._4_4_ - auVar262._12_4_ * auVar437._4_4_;
    auVar156 = NEON_ext(auVar197,auVar197,4,1);
    auVar253 = NEON_ext(auVar319,auVar319,4,1);
    fVar210 = auVar230._0_4_;
    fVar189 = auVar156._0_4_ * fVar210;
    fVar448 = auVar230._4_4_;
    auVar263._0_4_ = auVar319._0_4_ * auVar366._0_4_ - auVar253._0_4_ * auVar157._0_4_;
    auVar263._4_4_ = auVar319._4_4_ * auVar366._4_4_ - auVar253._4_4_ * auVar157._4_4_;
    auVar263._8_4_ = auVar319._8_4_ * auVar366._8_4_ - auVar319._0_4_ * auVar157._8_4_;
    auVar263._12_4_ = auVar319._12_4_ * auVar366._12_4_ - auVar319._4_4_ * auVar157._12_4_;
    auVar303._0_4_ = fVar210 * auVar252._0_4_;
    auVar303._4_4_ = fVar448 * auVar252._4_4_;
    auVar303._8_4_ = auVar342._0_4_ * auVar196._0_4_;
    auVar303._12_4_ = auVar342._4_4_ * auVar196._4_4_;
    auVar253 = NEON_ext(auVar263,auVar263,4,1);
    auVar304._4_12_ = auVar303._4_12_;
    auVar304._0_4_ = auVar303._0_4_;
    auVar306._0_8_ = auVar304._0_8_;
    auVar306._8_4_ = auVar303._8_4_;
    auVar306._12_4_ = auVar303._12_4_;
    auVar305._8_8_ = auVar306._8_8_;
    auVar305._4_4_ = fVar189;
    auVar305._0_4_ = auVar303._0_4_;
    auVar307._0_12_ = auVar305._0_12_;
    auVar307._12_4_ = auVar197._0_4_ * auVar342._0_4_;
    fVar210 = auVar253._0_4_ * fVar210;
    fVar155 = auVar253._4_4_ * fVar448;
    auVar253 = NEON_ext(auVar307,auVar307,8,1);
    fVar406 = auVar253._0_4_ + fVar448 * auVar252._4_4_ + auVar303._0_4_;
    fVar189 = auVar253._4_4_ + auVar156._4_4_ * fVar448 + fVar189;
    fVar448 = fVar210 + fVar155 + auVar263._0_4_ * auVar342._0_4_;
    fVar210 = fVar210 + fVar155 + auVar263._0_4_ * auVar342._0_4_;
    uStack_1a8 = CONCAT44(fVar210,fVar448);
    local_1b0 = CONCAT44(fVar189,fVar406);
    fVar356 = (float)((ulong)uVar125 >> 0x20);
    fVar87 = (float)uVar91;
    fVar113 = (float)((ulong)uVar91 >> 0x20);
    fVar155 = (float)uVar125;
    switch((-(fVar189 < 0.0) & 2U) + (fVar406 < 0.0) | -(fVar448 < 0.0) & 4U) {
    case 1:
      auVar159._0_4_ = fVar406 - fVar155;
      auVar159._4_4_ = fVar189 - fVar356;
      auVar159._8_4_ = fVar448 - fVar87;
      auVar159._12_4_ = fVar210 - fVar113;
      auVar253 = NEON_ext(auVar19,auVar19,8,1);
      auVar156 = NEON_ext(auVar159,auVar159,8,1);
      if (auVar253._0_4_ * auVar159._4_4_ <= auVar156._0_4_ * fVar356)
      goto switchD_001cd6ec_caseD_5;
      break;
    case 2:
      auVar160._0_4_ = fVar406 - fVar155;
      auVar160._4_4_ = fVar189 - fVar356;
      auVar160._8_4_ = fVar448 - fVar87;
      auVar160._12_4_ = fVar210 - fVar113;
      auVar253 = NEON_ext(auVar19,auVar19,8,1);
      auVar156 = NEON_ext(auVar160,auVar160,8,1);
      if (auVar253._0_4_ * auVar160._0_4_ < fVar155 * auVar156._0_4_) goto switchD_001cd6ec_caseD_6;
      break;
    case 3:
      break;
    case 4:
      if ((fVar406 - fVar155) * fVar356 <= fVar155 * (fVar189 - fVar356))
      goto switchD_001cd6ec_caseD_6;
    case 5:
switchD_001cd6ec_caseD_5:
      pfVar33[6] = fVar288;
      pfVar33[7] = fVar295;
      pfVar33[4] = fVar212;
      pfVar33[5] = fVar204;
      break;
    default:
switchD_001cd6ec_caseD_6:
      pfVar33[2] = fVar288;
      pfVar33[3] = fVar295;
      *pfVar33 = fVar212;
      pfVar33[1] = fVar204;
      break;
    case 7:
      pfVar30[2] = fVar209;
      pfVar30[3] = fVar354;
      *pfVar30 = fVar190;
      pfVar30[1] = fVar206;
      uVar316 = 1;
      if (iVar335 != 2) goto LAB_001cdfd4;
LAB_001cdbd8:
      local_ac[0] = 1;
      goto LAB_001ce604;
    }
switchD_001cd6ec_caseD_3:
    uVar34 = 2;
    uVar376 = 2;
    local_b0 = 2;
    local_ac[0] = 2;
switchD_001ccf14_caseD_1b:
    auVar216._0_4_ = local_260 - local_270;
    auVar216._4_4_ = fStack_25c - fStack_26c;
    auVar216._8_4_ = fStack_258 - fStack_268;
    auVar216._12_4_ = fStack_254 - fStack_264;
    auVar224 = NEON_ext(auVar216,auVar216,4,1);
    auVar225._0_4_ = local_200 - local_210[0];
    auVar225._4_4_ = fStack_1fc - local_210[1];
    auVar225._8_4_ = fStack_1f8 - local_210[2];
    auVar225._12_4_ = fStack_1f4 - fStack_204;
    auVar253 = NEON_ext(auVar225,auVar225,4,1);
    auVar398._0_4_ = auVar216._0_4_ * auVar216._0_4_;
    auVar398._4_4_ = auVar216._4_4_ * auVar216._4_4_;
    auVar398._8_4_ = auVar216._8_4_ * auVar216._8_4_;
    auVar398._12_4_ = auVar216._12_4_ * auVar216._12_4_;
    auVar161._0_4_ = auVar225._0_4_ * auVar225._0_4_;
    auVar161._4_4_ = auVar225._4_4_ * auVar225._4_4_;
    auVar161._8_4_ = auVar225._8_4_ * auVar225._8_4_;
    auVar161._12_4_ = auVar225._12_4_ * auVar225._12_4_;
    fVar354 = auVar253._0_4_;
    fVar356 = auVar253._4_4_;
    auVar156 = NEON_ext(auVar398,auVar398,8,1);
    fVar448 = auVar225._0_4_ * auVar224._0_4_;
    fVar210 = auVar225._4_4_ * auVar224._4_4_;
    auVar252 = NEON_ext(auVar161,auVar161,8,1);
    fVar206 = auVar216._0_4_ * fVar354 - fVar448;
    fVar209 = auVar216._4_4_ * fVar356 - fVar210;
    auVar389._0_8_ = CONCAT44(fVar209,fVar206);
    auVar389._8_4_ = auVar216._8_4_ * auVar225._0_4_ - auVar225._8_4_ * auVar216._0_4_;
    auVar389._12_4_ = auVar216._12_4_ * auVar225._4_4_ - auVar225._12_4_ * auVar216._4_4_;
    fVar155 = (auVar156._0_4_ + auVar398._0_4_ + auVar398._4_4_) *
              (auVar161._0_4_ + auVar161._4_4_ + auVar252._0_4_);
    auVar253 = NEON_ext(auVar389,auVar389,4,1);
    fVar406 = auVar253._0_4_;
    fVar189 = auVar253._4_4_;
    auVar208._8_8_ = auVar389._0_8_;
    auVar208._0_8_ = auVar253._0_8_;
    fVar190 = fVar406 * fVar406 + fVar189 * fVar189 + fVar206 * fVar206;
    in_q8[4] = auVar253[4];
    in_q8[5] = auVar253[5];
    in_q8[6] = auVar253[6];
    in_q8[8] = SUB41(fVar206,0);
    in_q8[9] = (undefined1)((uint)fVar206 >> 8);
    in_q8[10] = (undefined1)((uint)fVar206 >> 0x10);
    bVar236 = (byte)((uint)fVar206 >> 0x18);
    in_q8[0xc] = SUB41(fVar209,0);
    in_q8[0xd] = (undefined1)((uint)fVar209 >> 8);
    in_q8[0xe] = (undefined1)((uint)fVar209 >> 0x10);
    bVar237 = (byte)((uint)fVar209 >> 0x18);
    in_q8._0_3_ = auVar253._0_3_;
    bVar430 = (byte)((ulong)_DAT_03889700 >> 8);
    bVar229 = (byte)((ulong)_DAT_03889700 >> 0x10);
    bVar233 = (byte)((ulong)_DAT_03889700 >> 0x18);
    bVar234 = (byte)((ulong)_DAT_03889700 >> 0x28);
    bVar235 = (byte)((ulong)_DAT_03889700 >> 0x30);
    if (fVar155 * 0.0025000002 <= fVar190) {
      uVar125 = NEON_ext(auVar253._0_8_,auVar389._0_8_,4,1);
      fVar87 = (float)((ulong)uVar125 >> 0x20);
      fVar288 = local_270 - local_210[0];
      fVar295 = fStack_26c - local_210[1];
      fVar308 = fStack_268 - local_210[2];
      auVar264._0_4_ = auVar224._0_4_ * fVar406 - auVar216._0_4_ * (float)uVar125;
      auVar264._4_4_ = auVar224._4_4_ * fVar189 - auVar216._4_4_ * fVar87;
      auVar264._8_4_ = auVar216._0_4_ * fVar206 - auVar216._8_4_ * fVar406;
      auVar264._12_4_ = auVar216._4_4_ * fVar209 - auVar216._12_4_ * fVar189;
      auVar230 = NEON_ext(auVar264,auVar264,4,1);
      auVar198._0_4_ = fVar354 * fVar406 - auVar225._0_4_ * (float)uVar125;
      auVar198._4_4_ = fVar356 * fVar189 - auVar225._4_4_ * fVar87;
      auVar198._8_4_ = auVar225._0_4_ * fVar206 - auVar225._8_4_ * fVar406;
      auVar198._12_4_ = auVar225._4_4_ * fVar209 - auVar225._12_4_ * fVar189;
      auVar224 = NEON_ext(auVar198,auVar198,4,1);
      fVar118 = auVar224._0_4_;
      fVar212 = auVar224._4_4_;
      fVar209 = auVar198._0_4_ * auVar198._0_4_ + fVar118 * fVar118 + fVar212 * fVar212;
      uVar91 = CONCAT44(auVar198._0_4_ * auVar198._0_4_ + fVar118 * fVar118 + fVar212 * fVar212,
                        fVar209);
      uVar125 = NEON_frsqrte(uVar91,4);
      fVar87 = (float)uVar125;
      fVar113 = (float)((ulong)uVar125 >> 0x20);
      uVar125 = NEON_frsqrts(uVar91,CONCAT44(fVar113 * fVar113,fVar87 * fVar87),4);
      fVar204 = auVar230._0_4_;
      fVar205 = auVar230._4_4_;
      iVar335 = -(uint)(fVar209 <= 0.0);
      fVar209 = fVar209 * fVar87 * (float)uVar125;
      fVar87 = auVar264._0_4_ * auVar264._0_4_ + fVar204 * fVar204 + fVar205 * fVar205;
      uVar125 = CONCAT44(auVar264._0_4_ * auVar264._0_4_ + fVar204 * fVar204 + fVar205 * fVar205,
                         fVar87);
      uVar91 = NEON_frsqrte(uVar125,4);
      fVar209 = (float)CONCAT13((byte)((uint)fVar209 >> 0x18) & ~(byte)((uint)iVar335 >> 0x18),
                                CONCAT12((byte)((uint)fVar209 >> 0x10) &
                                         ~(byte)((uint)iVar335 >> 0x10),
                                         CONCAT11((byte)((uint)fVar209 >> 8) &
                                                  ~(byte)((uint)iVar335 >> 8),
                                                  SUB41(fVar209,0) & ~(byte)iVar335)));
      fVar113 = (float)uVar91;
      fVar289 = (float)((ulong)uVar91 >> 0x20);
      uVar125 = NEON_frsqrts(uVar125,CONCAT44(fVar289 * fVar289,fVar113 * fVar113),4);
      iVar335 = -(uint)(fVar87 <= 0.0);
      fVar87 = fVar87 * fVar113 * (float)uVar125;
      auVar390._0_4_ = fVar288 * fVar118;
      auVar390._4_4_ = fVar295 * fVar212;
      auVar390._8_4_ = fVar308 * auVar198._0_4_;
      auVar390._12_4_ = (fStack_264 - fStack_204) * auVar198._4_4_;
      fVar113 = (float)CONCAT13((byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar335 >> 0x18),
                                CONCAT12((byte)((uint)fVar87 >> 0x10) &
                                         ~(byte)((uint)iVar335 >> 0x10),
                                         CONCAT11((byte)((uint)fVar87 >> 8) &
                                                  ~(byte)((uint)iVar335 >> 8),
                                                  SUB41(fVar87,0) & ~(byte)iVar335)));
      auVar265._0_4_ = (local_210[0] - local_260) * fVar118;
      auVar265._4_4_ = (local_210[1] - fStack_25c) * fVar212;
      auVar265._8_4_ = (local_210[2] - fStack_258) * auVar198._0_4_;
      auVar265._12_4_ = (fStack_204 - fStack_254) * auVar198._4_4_;
      auVar358 = NEON_ext(auVar390,auVar390,8,1);
      auVar294._0_4_ = fVar288 * fVar204;
      auVar294._4_4_ = fVar295 * fVar205;
      auVar294._8_4_ = fVar308 * auVar264._0_4_;
      auVar294._12_4_ = (fStack_264 - fStack_204) * auVar264._4_4_;
      auVar126._0_4_ = (local_200 - local_270) * fVar204;
      auVar126._4_4_ = (fStack_1fc - fStack_26c) * fVar205;
      auVar126._8_4_ = (fStack_1f8 - fStack_268) * auVar264._0_4_;
      auVar126._12_4_ = (fStack_1f4 - fStack_264) * auVar264._4_4_;
      auVar230 = NEON_ext(auVar265,auVar265,8,1);
      auVar432 = NEON_ext(auVar294,auVar294,8,1);
      auVar224 = NEON_ext(auVar126,auVar126,8,1);
      fVar87 = auVar358._0_4_ + auVar390._0_4_ + auVar390._4_4_;
      fVar289 = auVar230._0_4_ + auVar265._0_4_ + auVar265._4_4_;
      fVar118 = auVar432._0_4_ + auVar294._0_4_ + auVar294._4_4_;
      fVar212 = auVar224._0_4_ + auVar126._0_4_ + auVar126._4_4_;
      if (fVar113 * 1e-05 < fVar212 &&
          (fVar113 * 1e-05 < fVar118 && (fVar209 * 1e-05 < fVar87 && fVar209 * 1e-05 < fVar289))) {
        uVar125 = CONCAT44(fVar87 + fVar289,fVar87 + fVar289);
        uVar91 = NEON_frecpe(uVar125,4);
        uVar337 = NEON_frecps(uVar125,uVar91,4);
        fVar448 = (float)uVar91 * (float)uVar337;
        fVar210 = (float)((ulong)uVar91 >> 0x20) * (float)((ulong)uVar337 >> 0x20);
        uVar125 = NEON_frecps(uVar125,CONCAT44(fVar210,fVar448),4);
        fVar448 = fVar448 * (float)uVar125 * fVar87;
        fVar87 = fVar210 * (float)((ulong)uVar125 >> 0x20) * fVar87;
        bVar77 = (byte)((uint)(fVar308 * fVar206 + fVar288 * fVar406 + fVar295 * fVar189) >> 0x18);
        bVar78 = (byte)((uint)(fVar308 * fVar206 + fVar288 * fVar406 + fVar295 * fVar189) >> 0x18);
        uVar34 = CONCAT17(bVar78,(uint7)(bVar77 & 0x80) << 0x18) & 0x80ffffffffffffff;
        in_q8[3] = (byte)(uVar34 >> 0x18) ^ auVar253[3];
        in_q8[7] = (byte)(uVar34 >> 0x38) ^ auVar253[7];
        in_q8[0xb] = bVar77 & 0x80 ^ bVar236;
        in_q8[0xf] = bVar78 & 0x80 ^ bVar237;
        fStack_178 = fStack_268 + auVar216._8_4_ * fVar448;
        fStack_174 = fStack_264 + auVar216._12_4_ * fVar87;
        local_180 = local_270 + auVar216._0_4_ * fVar448;
        fStack_17c = fStack_26c + auVar216._4_4_ * fVar87;
      }
      else {
        iVar335 = -(uint)(0.0 < fVar87);
        iVar351 = -(uint)(0.0 < fVar289);
        iVar353 = -(uint)(0.0 < fVar118);
        iVar355 = -(uint)(0.0 < fVar212);
        iVar335 = CONCAT13((byte)((uint)iVar335 >> 0x18) & bVar233,
                           CONCAT12((byte)((uint)iVar335 >> 0x10) & bVar229,
                                    CONCAT11((byte)((uint)iVar335 >> 8) & bVar430,
                                             (byte)iVar335 & bVar77)));
        auVar39._0_8_ =
             CONCAT17((byte)((uint)iVar351 >> 0x18) & bVar418,
                      CONCAT16((byte)((uint)iVar351 >> 0x10) & bVar235,
                               CONCAT15((byte)((uint)iVar351 >> 8) & bVar234,
                                        CONCAT14((byte)iVar351 & bVar78,iVar335))));
        auVar39[8] = (byte)iVar353 & bVar420;
        auVar39[9] = (byte)((uint)iVar353 >> 8) & bVar421;
        auVar39[10] = (byte)((uint)iVar353 >> 0x10) & bVar422;
        auVar39[0xb] = (byte)((uint)iVar353 >> 0x18) & bVar424;
        auVar46[0xc] = (byte)iVar355 & bVar425;
        auVar46._0_12_ = auVar39;
        auVar46[0xd] = (byte)((uint)iVar355 >> 8) & bVar426;
        auVar46[0xe] = (byte)((uint)iVar355 >> 0x10) & bVar428;
        auVar46[0xf] = (byte)((uint)iVar355 >> 0x18) & bVar429;
        switch(iVar335 + (int)((ulong)auVar39._0_8_ >> 0x20) + auVar39._8_4_ + auVar46._12_4_) {
        case 7:
          local_210[2] = fStack_1f8;
          fStack_204 = fStack_1f4;
          local_210[0] = local_200;
          local_210[1] = fStack_1fc;
        case 0xb:
          local_b0 = 1;
switchD_001ccf14_caseD_1a:
          auVar172._4_4_ = fStack_26c;
          auVar172._0_4_ = local_270;
          auVar172._8_4_ = fStack_268;
          auVar172._12_4_ = fStack_264;
          auVar17._4_4_ = fStack_25c;
          auVar17._0_4_ = local_260;
          auVar17._8_4_ = fStack_258;
          auVar17._12_4_ = fStack_254;
          auVar170._0_4_ = local_260 - local_270;
          auVar170._4_4_ = fStack_25c - fStack_26c;
          auVar170._8_4_ = fStack_258 - fStack_268;
          auVar170._12_4_ = fStack_254 - fStack_264;
          fVar406 = auVar170._0_4_ * (local_260 - local_210[0]);
          fVar189 = auVar170._4_4_ * (fStack_25c - local_210[1]);
          fVar210 = auVar170._8_4_ * (fStack_258 - local_210[2]);
          fVar190 = auVar170._0_4_ * (local_270 - local_210[0]);
          fVar206 = auVar170._4_4_ * (fStack_26c - local_210[1]);
          fVar448 = auVar170._8_4_ * (fStack_268 - local_210[2]);
          fVar155 = fVar406 + fVar189 + fVar210;
          fVar210 = fVar406 + fVar189 + fVar210;
          fVar406 = fVar190 + fVar206 + fVar448;
          fVar448 = fVar190 + fVar206 + fVar448;
          if (fVar155 * fVar406 < 0.0) {
            local_ac[0] = 2;
            auVar268._0_4_ =
                 (local_270 - local_210[0]) * fVar155 - (local_260 - local_210[0]) * fVar406;
            auVar268._4_4_ =
                 (fStack_26c - local_210[1]) * fVar210 - (fStack_25c - local_210[1]) * fVar448;
            auVar268._8_4_ =
                 (fStack_268 - local_210[2]) * fVar155 - (fStack_258 - local_210[2]) * fVar406;
            auVar268._12_4_ =
                 (fStack_264 - fStack_204) * fVar210 - (fStack_254 - fStack_204) * fVar448;
            auVar253 = NEON_ext(auVar170,auVar170,4,1);
            auVar156 = NEON_ext(auVar268,auVar268,4,1);
            uVar91 = CONCAT44(auVar170._8_4_ * auVar170._8_4_ +
                              auVar170._0_4_ * auVar170._0_4_ + auVar170._4_4_ * auVar170._4_4_,
                              auVar170._8_4_ * auVar170._8_4_ +
                              auVar170._0_4_ * auVar170._0_4_ + auVar170._4_4_ * auVar170._4_4_);
            fVar448 = auVar170._0_4_ * auVar156._0_4_ - auVar253._0_4_ * auVar268._0_4_;
            fVar210 = auVar170._4_4_ * auVar156._4_4_ - auVar253._4_4_ * auVar268._4_4_;
            auVar269._0_8_ = CONCAT44(fVar210,fVar448);
            auVar269._8_4_ = auVar170._8_4_ * auVar268._0_4_ - auVar170._0_4_ * auVar268._8_4_;
            auVar269._12_4_ = auVar170._12_4_ * auVar268._4_4_ - auVar170._4_4_ * auVar268._12_4_;
            auVar156 = NEON_ext(auVar269,auVar269,4,1);
            uVar337 = NEON_ext(auVar156._0_8_,auVar269._0_8_,4,1);
            uVar125 = NEON_frecpe(uVar91,4);
            uVar91 = NEON_frecps(uVar91,uVar125,4);
            fVar406 = (float)uVar125 * (float)uVar91;
            fVar189 = (float)((ulong)uVar125 >> 0x20) * (float)((ulong)uVar91 >> 0x20);
            auVar173._0_4_ = auVar253._0_4_ * auVar156._0_4_ - auVar170._0_4_ * (float)uVar337;
            auVar173._4_4_ =
                 auVar253._4_4_ * auVar156._4_4_ - auVar170._4_4_ * (float)((ulong)uVar337 >> 0x20);
            auVar173._8_4_ = auVar170._0_4_ * fVar448 - auVar170._8_4_ * auVar156._0_4_;
            auVar173._12_4_ = auVar170._4_4_ * fVar210 - auVar170._12_4_ * auVar156._4_4_;
            auVar253 = NEON_ext(auVar173,auVar173,4,1);
            fVar406 = fVar406 * fVar406;
            fVar189 = fVar189 * fVar189;
            in_q8._0_4_ = auVar253._0_4_ * fVar406;
            in_q8._4_4_ = auVar253._4_4_ * fVar189;
            in_q8._8_4_ = auVar173._0_4_ * fVar406;
            in_q8._12_4_ = auVar173._4_4_ * fVar189;
          }
          else {
            auVar171._0_8_ = CONCAT44(-(uint)(fVar210 <= 0.0),-(uint)(fVar155 <= 0.0));
            auVar171._8_8_ = auVar171._0_8_;
            auVar172 = auVar172 ^ (auVar172 ^ auVar17) & auVar171;
            fStack_268 = auVar172._8_4_;
            fStack_264 = auVar172._12_4_;
            local_270 = auVar172._0_4_;
            fStack_26c = auVar172._4_4_;
            in_q8._0_4_ = local_270 - local_210[0];
            in_q8._4_4_ = fStack_26c - local_210[1];
            in_q8._8_4_ = fStack_268 - local_210[2];
            in_q8._12_4_ = fStack_264 - fStack_204;
            local_ac[0] = 1;
          }
          break;
        default:
          goto switchD_001cd920_caseD_8;
        case 0xd:
          fStack_268 = fStack_258;
          fStack_264 = fStack_254;
          local_270 = local_260;
          fStack_26c = fStack_25c;
        case 0xe:
          local_ac[0] = 1;
switchD_001ccf14_caseD_13:
          auVar176._4_4_ = local_210[1];
          auVar176._0_4_ = local_210[0];
          auVar176._8_4_ = local_210[2];
          auVar176._12_4_ = fStack_204;
          auVar18._4_4_ = fStack_1fc;
          auVar18._0_4_ = local_200;
          auVar18._8_4_ = fStack_1f8;
          auVar18._12_4_ = fStack_1f4;
          auVar174._0_4_ = local_200 - local_210[0];
          auVar174._4_4_ = fStack_1fc - local_210[1];
          auVar174._8_4_ = fStack_1f8 - local_210[2];
          auVar174._12_4_ = fStack_1f4 - fStack_204;
          fVar406 = auVar174._0_4_ * (local_200 - local_270);
          fVar189 = auVar174._4_4_ * (fStack_1fc - fStack_26c);
          fVar210 = auVar174._8_4_ * (fStack_1f8 - fStack_268);
          fVar190 = auVar174._0_4_ * (local_210[0] - local_270);
          fVar206 = auVar174._4_4_ * (local_210[1] - fStack_26c);
          fVar448 = auVar174._8_4_ * (local_210[2] - fStack_268);
          fVar155 = fVar406 + fVar189 + fVar210;
          fVar210 = fVar406 + fVar189 + fVar210;
          fVar406 = fVar190 + fVar206 + fVar448;
          fVar448 = fVar190 + fVar206 + fVar448;
          if (fVar155 * fVar406 < 0.0) {
            uVar316 = 2;
            auVar270._0_4_ =
                 (local_210[0] - local_270) * fVar155 - (local_200 - local_270) * fVar406;
            auVar270._4_4_ =
                 (local_210[1] - fStack_26c) * fVar210 - (fStack_1fc - fStack_26c) * fVar448;
            auVar270._8_4_ =
                 (local_210[2] - fStack_268) * fVar155 - (fStack_1f8 - fStack_268) * fVar406;
            auVar270._12_4_ =
                 (fStack_204 - fStack_264) * fVar210 - (fStack_1f4 - fStack_264) * fVar448;
            auVar253 = NEON_ext(auVar174,auVar174,4,1);
            auVar156 = NEON_ext(auVar270,auVar270,4,1);
            uVar91 = CONCAT44(auVar174._8_4_ * auVar174._8_4_ +
                              auVar174._0_4_ * auVar174._0_4_ + auVar174._4_4_ * auVar174._4_4_,
                              auVar174._8_4_ * auVar174._8_4_ +
                              auVar174._0_4_ * auVar174._0_4_ + auVar174._4_4_ * auVar174._4_4_);
            fVar448 = auVar174._0_4_ * auVar156._0_4_ - auVar253._0_4_ * auVar270._0_4_;
            fVar210 = auVar174._4_4_ * auVar156._4_4_ - auVar253._4_4_ * auVar270._4_4_;
            auVar271._0_8_ = CONCAT44(fVar210,fVar448);
            auVar271._8_4_ = auVar174._8_4_ * auVar270._0_4_ - auVar174._0_4_ * auVar270._8_4_;
            auVar271._12_4_ = auVar174._12_4_ * auVar270._4_4_ - auVar174._4_4_ * auVar270._12_4_;
            auVar156 = NEON_ext(auVar271,auVar271,4,1);
            uVar337 = NEON_ext(auVar156._0_8_,auVar271._0_8_,4,1);
            uVar125 = NEON_frecpe(uVar91,4);
            uVar91 = NEON_frecps(uVar91,uVar125,4);
            fVar406 = (float)uVar125 * (float)uVar91;
            fVar189 = (float)((ulong)uVar125 >> 0x20) * (float)((ulong)uVar91 >> 0x20);
            auVar177._0_4_ = auVar174._0_4_ * (float)uVar337 - auVar253._0_4_ * auVar156._0_4_;
            auVar177._4_4_ =
                 auVar174._4_4_ * (float)((ulong)uVar337 >> 0x20) - auVar253._4_4_ * auVar156._4_4_;
            auVar177._8_4_ = auVar174._8_4_ * auVar156._0_4_ - auVar174._0_4_ * fVar448;
            auVar177._12_4_ = auVar174._12_4_ * auVar156._4_4_ - auVar174._4_4_ * fVar210;
            auVar253 = NEON_ext(auVar177,auVar177,4,1);
            fVar406 = fVar406 * fVar406;
            fVar189 = fVar189 * fVar189;
            in_q8._0_4_ = auVar253._0_4_ * fVar406;
            in_q8._4_4_ = auVar253._4_4_ * fVar189;
            in_q8._8_4_ = auVar177._0_4_ * fVar406;
            in_q8._12_4_ = auVar177._4_4_ * fVar189;
LAB_001cdfd4:
            local_b0 = uVar316;
          }
          else {
            auVar175._0_8_ = CONCAT44(-(uint)(fVar210 <= 0.0),-(uint)(fVar155 <= 0.0));
            auVar175._8_8_ = auVar175._0_8_;
            auVar176 = auVar176 ^ (auVar176 ^ auVar18) & auVar175;
            local_210[2] = auVar176._8_4_;
            fStack_204 = auVar176._12_4_;
            local_210[0] = auVar176._0_4_;
            local_210[1] = auVar176._4_4_;
            in_q8._0_4_ = local_270 - local_210[0];
            in_q8._4_4_ = fStack_26c - local_210[1];
            in_q8._8_4_ = fStack_268 - local_210[2];
            in_q8._12_4_ = fStack_264 - fStack_204;
            local_b0 = 1;
          }
        }
      }
      break;
    }
switchD_001cd920_caseD_8:
    fVar448 = fVar448 - auVar216._0_4_ * fVar354;
    fVar210 = fVar210 - auVar216._4_4_ * fVar356;
    auVar93._0_8_ = CONCAT44(fVar210,fVar448);
    auVar93._8_4_ = auVar225._8_4_ * auVar216._0_4_ - auVar216._8_4_ * auVar225._0_4_;
    auVar93._12_4_ = auVar225._12_4_ * auVar216._4_4_ - auVar216._12_4_ * auVar225._4_4_;
    auVar224 = NEON_ext(auVar93,auVar93,4,1);
    fVar209 = local_210[0] - local_270;
    fVar87 = local_210[1] - fStack_26c;
    fVar113 = local_210[2] - fStack_268;
    uVar337 = NEON_ext(auVar224._0_8_,auVar93._0_8_,4,1);
    fVar289 = auVar224._0_4_;
    fVar204 = auVar224._4_4_;
    fVar118 = fVar448 * fVar448 + fVar289 * fVar289 + fVar204 * fVar204;
    fVar212 = fVar448 * fVar448 + fVar289 * fVar289 + fVar204 * fVar204;
    uVar125 = CONCAT44(fVar212,fVar118);
    iVar335 = -(uint)(fVar118 == 0.0);
    iVar351 = -(uint)(fVar212 == 0.0);
    uVar318 = CONCAT17(~(byte)((uint)iVar351 >> 0x18),
                       CONCAT16(~(byte)((uint)iVar351 >> 0x10),
                                CONCAT15(~(byte)((uint)iVar351 >> 8),
                                         CONCAT14(~(byte)iVar351,
                                                  CONCAT13(~(byte)((uint)iVar335 >> 0x18),
                                                           CONCAT12(~(byte)((uint)iVar335 >> 0x10),
                                                                    CONCAT11(~(byte)((uint)iVar335
                                                                                    >> 8),
                                                                             ~(byte)iVar335)))))));
    uVar91 = NEON_frecpe(uVar125,4);
    uVar375 = NEON_frecps(uVar125,uVar91,4);
    fVar118 = (float)uVar91 * (float)uVar375;
    fVar212 = (float)((ulong)uVar91 >> 0x20) * (float)((ulong)uVar375 >> 0x20);
    uVar125 = NEON_frecps(uVar125,CONCAT44(fVar212,fVar118),4);
    auVar127._0_4_ = fVar354 * fVar289 - auVar225._0_4_ * (float)uVar337;
    auVar127._4_4_ = fVar356 * fVar204 - auVar225._4_4_ * (float)((ulong)uVar337 >> 0x20);
    auVar127._8_4_ = auVar225._0_4_ * fVar448 - auVar225._8_4_ * fVar289;
    auVar127._12_4_ = auVar225._4_4_ * fVar210 - auVar225._12_4_ * fVar204;
    auVar224 = NEON_ext(auVar127,auVar127,4,1);
    auVar266._0_4_ = auVar216._0_4_ * fVar209;
    auVar266._4_4_ = auVar216._4_4_ * fVar87;
    auVar266._8_4_ = auVar216._8_4_ * fVar113;
    auVar266._12_4_ = auVar216._12_4_ * (fStack_204 - fStack_264);
    fVar354 = fVar209 * auVar224._0_4_;
    fVar356 = fVar87 * auVar224._4_4_;
    auVar230 = NEON_ext(auVar266,auVar266,8,1);
    auVar47._0_4_ = fVar209 * auVar225._0_4_;
    auVar47._4_4_ = fVar87 * auVar225._4_4_;
    auVar47._8_4_ = fVar113 * auVar225._8_4_;
    auVar47._12_4_ = (fStack_204 - fStack_264) * auVar225._12_4_;
    auVar224 = NEON_ext(auVar47,auVar47,8,1);
    auVar267._0_4_ = auVar156._0_4_ + auVar398._0_4_ + auVar398._4_4_;
    auVar267._4_4_ = auVar230._0_4_ + auVar266._0_4_ + auVar266._4_4_;
    fVar448 = auVar252._0_4_ + auVar161._0_4_ + auVar161._4_4_;
    fVar210 = auVar224._0_4_ + auVar47._0_4_ + auVar47._4_4_;
    auVar267._12_4_ = fVar210;
    auVar267._8_4_ = fVar448;
    uVar338 = CONCAT44(fVar212 * (float)((ulong)uVar125 >> 0x20),fVar118 * (float)uVar125) & uVar318
    ;
    auVar156 = NEON_frecpe(auVar267,4);
    fVar209 = (float)uVar338 * (fVar113 * auVar127._0_4_ + fVar354 + fVar356);
    fVar354 = (float)(uVar338 >> 0x20) * (fVar113 * auVar127._0_4_ + fVar354 + fVar356);
    auVar252 = NEON_frecps(auVar267,auVar156,4);
    auVar162._0_4_ = auVar156._0_4_ * auVar252._0_4_;
    auVar162._4_4_ = auVar156._4_4_ * auVar252._4_4_;
    auVar162._8_4_ = auVar156._8_4_ * auVar252._8_4_;
    auVar162._12_4_ = auVar156._12_4_ * auVar252._12_4_;
    iVar335 = -(uint)(auVar267._0_4_ == 0.0);
    iVar351 = -(uint)(auVar267._4_4_ == 0.0);
    iVar353 = -(uint)(fVar448 == 0.0);
    iVar355 = -(uint)(fVar210 == 0.0);
    auVar156 = NEON_frecps(auVar267,auVar162,4);
    uVar309 = NEON_fmax(uVar148,uVar150 ^ (uVar150 ^ CONCAT44(fVar354,fVar209)) &
                                          CONCAT44(-(uint)(fVar354 < fVar114),
                                                   -(uint)(fVar209 < fVar153)),4);
    fVar209 = auVar216._8_4_ * auVar225._8_4_ +
              auVar216._0_4_ * auVar225._0_4_ + auVar216._4_4_ * auVar225._4_4_;
    fVar354 = auVar216._8_4_ * auVar225._8_4_ +
              auVar216._0_4_ * auVar225._0_4_ + auVar216._4_4_ * auVar225._4_4_;
    fVar448 = auVar162._0_4_ * auVar156._0_4_;
    fVar356 = auVar162._4_4_ * auVar156._4_4_;
    fVar87 = auVar162._8_4_ * auVar156._8_4_;
    fVar113 = auVar162._12_4_ * auVar156._12_4_;
    auVar94._0_4_ =
         (float)CONCAT13((byte)((uint)fVar448 >> 0x18) & ~(byte)((uint)iVar335 >> 0x18),
                         CONCAT12((byte)((uint)fVar448 >> 0x10) & ~(byte)((uint)iVar335 >> 0x10),
                                  CONCAT11((byte)((uint)fVar448 >> 8) & ~(byte)((uint)iVar335 >> 8),
                                           SUB41(fVar448,0) & ~(byte)iVar335)));
    auVar94[4] = SUB41(fVar356,0) & ~(byte)iVar351;
    auVar94[5] = (byte)((uint)fVar356 >> 8) & ~(byte)((uint)iVar351 >> 8);
    auVar94[6] = (byte)((uint)fVar356 >> 0x10) & ~(byte)((uint)iVar351 >> 0x10);
    auVar94[7] = (byte)((uint)fVar356 >> 0x18) & ~(byte)((uint)iVar351 >> 0x18);
    auVar94[8] = SUB41(fVar87,0) & ~(byte)iVar353;
    auVar94[9] = (byte)((uint)fVar87 >> 8) & ~(byte)((uint)iVar353 >> 8);
    auVar94[10] = (byte)((uint)fVar87 >> 0x10) & ~(byte)((uint)iVar353 >> 0x10);
    auVar94[0xb] = (byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar353 >> 0x18);
    auVar94[0xc] = SUB41(fVar113,0) & ~(byte)iVar355;
    auVar94[0xd] = (byte)((uint)fVar113 >> 8) & ~(byte)((uint)iVar355 >> 8);
    auVar94[0xe] = (byte)((uint)fVar113 >> 0x10) & ~(byte)((uint)iVar355 >> 0x10);
    auVar94[0xf] = (byte)((uint)fVar113 >> 0x18) & ~(byte)((uint)iVar355 >> 0x18);
    auVar156 = NEON_ext(auVar94,auVar94,8,1);
    fVar448 = ((float)uVar309 * fVar209 - fVar210) * auVar156._0_4_;
    fVar210 = ((float)(uVar309 >> 0x20) * fVar354 - fVar210) * auVar156._0_4_;
    uVar125 = NEON_fmax(uVar148,uVar150 ^ (uVar150 ^ CONCAT44(fVar210,fVar448)) &
                                          CONCAT44(-(uint)(fVar210 < fVar114),
                                                   -(uint)(fVar448 < fVar153)),4);
    fVar356 = (float)uVar125;
    fVar87 = (float)((ulong)uVar125 >> 0x20);
    fVar209 = (auVar267._4_4_ + fVar209 * fVar356) * auVar94._0_4_;
    fVar354 = (auVar267._4_4_ + fVar354 * fVar87) * auVar94._0_4_;
    uVar338 = NEON_fmax(uVar148,uVar150 ^ (uVar150 ^ CONCAT44(fVar354,fVar209)) &
                                          CONCAT44(-(uint)(fVar354 < fVar114),
                                                   -(uint)(fVar209 < fVar153)),4);
    uVar338 = uVar338 ^ (uVar338 ^ uVar309) &
                        CONCAT44(-(uint)(fVar87 == fVar210),-(uint)(fVar356 == fVar448)) & uVar318;
    fVar448 = (float)uVar338;
    fVar210 = (float)(uVar338 >> 0x20);
    local_180 = local_270 + auVar216._0_4_ * fVar448;
    fStack_17c = fStack_26c + auVar216._4_4_ * fVar210;
    fStack_178 = fStack_268 + auVar216._8_4_ * fVar448;
    fStack_174 = fStack_264 + auVar216._12_4_ * fVar210;
    iVar335 = -(uint)(fVar448 == (float)uVar152);
    iVar351 = -(uint)(fVar448 == (float)((ulong)uVar152 >> 0x20));
    iVar353 = -(uint)(fVar356 == (float)uVar154);
    iVar355 = -(uint)(fVar356 == (float)((ulong)uVar154 >> 0x20));
    iVar335 = CONCAT13((byte)((uint)iVar335 >> 0x18) & bVar233,
                       CONCAT12((byte)((uint)iVar335 >> 0x10) & bVar229,
                                CONCAT11((byte)((uint)iVar335 >> 8) & bVar430,(byte)iVar335 & bVar77
                                        )));
    auVar40._0_8_ =
         CONCAT17((byte)((uint)iVar351 >> 0x18) & bVar418,
                  CONCAT16((byte)((uint)iVar351 >> 0x10) & bVar235,
                           CONCAT15((byte)((uint)iVar351 >> 8) & bVar234,
                                    CONCAT14((byte)iVar351 & bVar78,iVar335))));
    auVar40[8] = (byte)iVar353 & bVar420;
    auVar40[9] = (byte)((uint)iVar353 >> 8) & bVar421;
    auVar40[10] = (byte)((uint)iVar353 >> 0x10) & bVar422;
    auVar40[0xb] = (byte)((uint)iVar353 >> 0x18) & bVar424;
    auVar48[0xc] = (byte)iVar355 & bVar425;
    auVar48._0_12_ = auVar40;
    auVar48[0xd] = (byte)((uint)iVar355 >> 8) & bVar426;
    auVar48[0xe] = (byte)((uint)iVar355 >> 0x10) & bVar428;
    auVar48[0xf] = (byte)((uint)iVar355 >> 0x18) & bVar429;
    uVar316 = iVar335 + (int)((ulong)auVar40._0_8_ >> 0x20) + auVar40._8_4_ + auVar48._12_4_;
    if (uVar316 == 0) {
      fVar448 = local_180 - (local_210[0] + auVar225._0_4_ * fVar356);
      fVar210 = fStack_17c - (local_210[1] + auVar225._4_4_ * fVar87);
      auVar163._0_8_ = CONCAT44(fVar210,fVar448);
      auVar163._8_4_ = fStack_178 - (local_210[2] + auVar225._8_4_ * fVar356);
      auVar163._12_4_ = fStack_174 - (fStack_204 + auVar225._12_4_ * fVar87);
      if (fVar155 * 1e-12 <= fVar190) {
        fVar406 = fVar406 * fVar448;
        fVar189 = fVar189 * fVar210;
        bVar77 = (byte)((uint)(fVar206 * auVar163._8_4_ + fVar406 + fVar189) >> 0x18);
        bVar78 = (byte)((uint)(fVar206 * auVar163._8_4_ + fVar406 + fVar189) >> 0x18);
        uVar34 = CONCAT17(bVar78,(uint7)(bVar77 & 0x80) << 0x18) & 0x80ffffffffffffff;
        in_q8[3] = (byte)(uVar34 >> 0x18) ^ auVar253[3];
        in_q8[7] = (byte)(uVar34 >> 0x38) ^ auVar253[7];
        in_q8[0xb] = bVar77 & 0x80 ^ bVar236;
        in_q8[0xf] = bVar78 & 0x80 ^ bVar237;
      }
      else {
        in_q8._8_8_ = auVar163._8_8_;
        in_q8._0_8_ = auVar163._0_8_;
      }
      break;
    }
    in_q8 = auVar208;
    if ((uVar316 & 1) == 0) {
      if ((uVar316 >> 1 & 1) == 0) goto LAB_001cdac4;
      uVar376 = 1;
      local_ac[0] = 1;
      if ((uVar316 >> 2 & 1) == 0) goto LAB_001cdaa8;
LAB_001ccee0:
      uVar34 = 1;
      local_b0 = 1;
      local_210[2] = fStack_1f8;
      fStack_204 = fStack_1f4;
      local_210[0] = local_200;
      local_210[1] = fStack_1fc;
    }
    else {
      uVar376 = 1;
      local_ac[0] = 1;
      fStack_268 = fStack_258;
      fStack_264 = fStack_254;
      local_270 = local_260;
      fStack_26c = fStack_25c;
LAB_001cdac4:
      if ((uVar316 >> 2 & 1) != 0) goto LAB_001ccee0;
LAB_001cdaa8:
      if ((uVar316 >> 3 & 1) != 0) {
        uVar34 = 1;
        local_b0 = 1;
      }
    }
    goto LAB_001cceec;
  case 0x22:
switchD_001ccf14_caseD_22:
                    /* WARNING: This code block may not be properly labeled as switch case */
    auVar272._0_4_ = fStack_250 - local_260;
    auVar272._4_4_ = fStack_24c - fStack_25c;
    auVar272._8_4_ = fStack_248 - fStack_258;
    auVar272._12_4_ = local_244 - fStack_254;
    auVar391._0_4_ = local_270 - fStack_250;
    auVar391._4_4_ = fStack_26c - fStack_24c;
    auVar391._8_4_ = fStack_268 - fStack_248;
    auVar391._12_4_ = fStack_264 - local_244;
    auVar252 = NEON_ext(auVar391,auVar391,4,1);
    auVar400._0_4_ = local_260 - local_270;
    auVar400._4_4_ = fStack_25c - fStack_26c;
    auVar400._8_4_ = fStack_258 - fStack_268;
    auVar400._12_4_ = fStack_254 - fStack_264;
    auVar156 = NEON_ext(auVar272,auVar272,4,1);
    fVar356 = auVar272._0_4_ * auVar252._0_4_ - auVar391._0_4_ * auVar156._0_4_;
    fVar87 = auVar272._4_4_ * auVar252._4_4_ - auVar391._4_4_ * auVar156._4_4_;
    auVar369._0_8_ = CONCAT44(fVar87,fVar356);
    auVar369._8_4_ = auVar272._8_4_ * auVar391._0_4_ - auVar391._8_4_ * auVar272._0_4_;
    auVar369._12_4_ = auVar272._12_4_ * auVar391._4_4_ - auVar391._12_4_ * auVar272._4_4_;
    auVar211._0_4_ = local_210[0] - local_260;
    auVar211._4_4_ = local_210[1] - fStack_25c;
    auVar211._8_4_ = local_210[2] - fStack_258;
    auVar211._12_4_ = fStack_204 - fStack_254;
    auVar253 = NEON_ext(auVar211,auVar211,4,1);
    auVar224 = NEON_ext(auVar369,auVar369,4,1);
    auVar214._0_4_ = local_210[0] - fStack_250;
    auVar214._4_4_ = local_210[1] - fStack_24c;
    auVar214._8_4_ = local_210[2] - fStack_248;
    auVar214._12_4_ = fStack_204 - local_244;
    auVar217._0_4_ = local_210[0] - local_270;
    auVar217._4_4_ = local_210[1] - fStack_26c;
    auVar217._8_4_ = local_210[2] - fStack_268;
    auVar217._12_4_ = fStack_204 - fStack_264;
    in_q8._8_8_ = auVar369._0_8_;
    in_q8._0_8_ = auVar224._0_8_;
    auVar273._0_4_ = auVar211._0_4_ * auVar156._0_4_ - auVar272._0_4_ * auVar253._0_4_;
    auVar273._4_4_ = auVar211._4_4_ * auVar156._4_4_ - auVar272._4_4_ * auVar253._4_4_;
    auVar273._8_4_ = auVar211._8_4_ * auVar272._0_4_ - auVar272._8_4_ * auVar211._0_4_;
    auVar273._12_4_ = auVar211._12_4_ * auVar272._4_4_ - auVar272._12_4_ * auVar211._4_4_;
    auVar230 = NEON_ext(auVar273,auVar273,4,1);
    auVar156 = NEON_ext(auVar214,auVar214,4,1);
    auVar253 = NEON_ext(auVar400,auVar400,4,1);
    auVar274._0_4_ = auVar214._0_4_ * auVar252._0_4_ - auVar391._0_4_ * auVar156._0_4_;
    auVar274._4_4_ = auVar214._4_4_ * auVar252._4_4_ - auVar391._4_4_ * auVar156._4_4_;
    auVar274._8_4_ = auVar214._8_4_ * auVar391._0_4_ - auVar391._8_4_ * auVar214._0_4_;
    auVar274._12_4_ = auVar214._12_4_ * auVar391._4_4_ - auVar391._12_4_ * auVar214._4_4_;
    auVar252 = NEON_ext(auVar274,auVar274,4,1);
    fVar212 = auVar224._4_4_;
    auVar156 = NEON_ext(auVar217,auVar217,4,1);
    fVar406 = auVar224._0_4_;
    fVar189 = fVar406 * auVar252._0_4_;
    auVar275._0_4_ = auVar217._0_4_ * auVar253._0_4_ - auVar400._0_4_ * auVar156._0_4_;
    auVar275._4_4_ = auVar217._4_4_ * auVar253._4_4_ - auVar400._4_4_ * auVar156._4_4_;
    auVar275._8_4_ = auVar217._8_4_ * auVar400._0_4_ - auVar400._8_4_ * auVar217._0_4_;
    auVar275._12_4_ = auVar217._12_4_ * auVar400._4_4_ - auVar400._12_4_ * auVar217._4_4_;
    auVar438._0_4_ = fVar406 * auVar230._0_4_;
    auVar438._4_4_ = fVar212 * auVar230._4_4_;
    auVar438._8_4_ = fVar356 * auVar273._0_4_;
    auVar438._12_4_ = fVar87 * auVar273._4_4_;
    auVar253 = NEON_ext(auVar275,auVar275,4,1);
    auVar439._4_12_ = auVar438._4_12_;
    auVar439._0_4_ = auVar438._0_4_;
    auVar441._0_8_ = auVar439._0_8_;
    auVar441._8_4_ = auVar438._8_4_;
    auVar441._12_4_ = auVar438._12_4_;
    auVar440._8_8_ = auVar441._8_8_;
    auVar440._4_4_ = fVar189;
    auVar440._0_4_ = auVar438._0_4_;
    auVar442._0_12_ = auVar440._0_12_;
    auVar442._12_4_ = fVar356 * auVar274._0_4_;
    auVar156 = NEON_ext(auVar442,auVar442,8,1);
    fVar118 = fVar406 * auVar253._0_4_;
    fVar289 = fVar212 * auVar253._4_4_;
    fVar113 = auVar156._0_4_ + fVar212 * auVar230._4_4_ + auVar438._0_4_;
    fVar114 = auVar156._4_4_ + fVar212 * auVar252._4_4_ + fVar189;
    auVar401._0_8_ = CONCAT44(fVar114,fVar113);
    fVar189 = fVar118 + fVar289 + fVar356 * auVar275._0_4_;
    uStack_1a8 = CONCAT44(fVar118 + fVar289 + fVar356 * auVar275._0_4_,fVar189);
    auVar401._8_8_ = uStack_1a8;
    uVar316 = (-(uint)(fVar114 < 0.0) & 2) + (uint)(fVar113 < 0.0) | -(uint)(fVar189 < 0.0) & 4;
    if (uVar316 != 7) {
      local_ac[0] = 2;
      cVar5 = PTR_DAT_043723e0[uVar316];
      local_1b0 = auVar401._0_8_;
      if (cVar5 < 0) {
        iVar335 = cVar5 + 8;
        if (2 < iVar335) goto LAB_001ce564;
        lVar28 = (long)iVar335;
        local_210[lVar28 * 4 + -0x16] = fStack_248;
        local_210[lVar28 * 4 + -0x15] = fVar354;
        local_280[lVar28 * 4 + 4] = fVar206;
        local_280[lVar28 * 4 + 5] = fVar209;
      }
      else {
        iVar335 = (int)cVar5;
        cVar6 = PTR_DAT_043723e8[iVar335];
        lVar27 = (long)cVar6;
        lVar28 = (long)iVar335;
        fVar406 = local_280[lVar28 * 4 + 4];
        fVar189 = local_280[lVar28 * 4 + 5];
        fVar448 = local_210[lVar28 * 4 + -0x16];
        fVar210 = local_210[lVar28 * 4 + -0x15];
        fVar155 = local_210[0] - fVar406;
        fVar190 = local_210[1] - fVar189;
        fVar356 = local_210[2] - fVar448;
        fVar87 = fStack_204 - fVar210;
        cVar5 = PTR_DAT_043723e8[(long)iVar335 + 2];
        lVar28 = (long)cVar5;
        auVar324._0_4_ = fVar155 * (local_280[lVar27 * 4 + 4] - fVar406);
        auVar324._4_4_ = fVar190 * (local_280[lVar27 * 4 + 5] - fVar189);
        auVar324._8_4_ = fVar356 * (local_210[lVar27 * 4 + -0x16] - fVar448);
        auVar324._12_4_ = fVar87 * (local_210[lVar27 * 4 + -0x15] - fVar210);
        auVar253 = NEON_ext(auVar324,auVar324,8,1);
        if (auVar324._0_4_ + auVar324._4_4_ + auVar253._0_4_ < 0.0) {
          fVar113 = local_280[lVar28 * 4 + 4];
          fVar114 = local_280[lVar28 * 4 + 5];
          fVar118 = local_210[lVar28 * 4 + -0x16];
          fVar212 = local_210[lVar28 * 4 + -0x15];
          local_210[lVar27 * 4 + -0x16] = fStack_248;
          local_210[lVar27 * 4 + -0x15] = fVar354;
          local_280[lVar27 * 4 + 4] = fVar206;
          local_280[lVar27 * 4 + 5] = fVar209;
          auVar185._0_4_ = fVar155 * (fVar113 - fVar406);
          auVar185._4_4_ = fVar190 * (fVar114 - fVar189);
          auVar185._8_4_ = fVar356 * (fVar118 - fVar448);
          auVar185._12_4_ = fVar87 * (fVar212 - fVar210);
          auVar253 = NEON_ext(auVar185,auVar185,8,1);
          if (auVar185._0_4_ + auVar185._4_4_ + auVar253._0_4_ < 0.0) {
            uVar125 = CONCAT44(fStack_25c,local_260);
            iVar335 = (int)cVar6;
            if (cVar5 != 2) {
              iVar335 = (int)cVar5;
            }
            local_ac[0] = 1;
            *(ulong *)(local_210 + (long)iVar335 * 4 + -0x16) = CONCAT44(fStack_254,fStack_258);
            *(undefined8 *)(local_280 + (long)iVar335 * 4 + 4) = uVar125;
            goto switchD_001ccf14_caseD_12;
          }
        }
        else {
          local_210[lVar28 * 4 + -0x16] = fStack_248;
          local_210[lVar28 * 4 + -0x15] = fVar354;
          local_280[lVar28 * 4 + 4] = fVar206;
          local_280[lVar28 * 4 + 5] = fVar209;
        }
      }
      goto switchD_001ccf14_caseD_1a;
    }
    auVar180._0_4_ = (local_270 - local_210[0]) * fVar406;
    auVar180._4_4_ = (fStack_26c - local_210[1]) * fVar212;
    auVar180._8_4_ = (fStack_268 - local_210[2]) * fVar356;
    auVar180._12_4_ = (fStack_264 - fStack_204) * fVar87;
    auVar253 = NEON_ext(auVar180,auVar180,8,1);
    if (auVar253._0_4_ + auVar180._0_4_ + auVar180._4_4_ < 0.0) {
      in_q8._0_4_ = -fVar406;
      in_q8._4_4_ = -fVar212;
      in_q8._8_4_ = -fVar356;
      in_q8._12_4_ = -fVar87;
      auVar181._8_8_ = _UNK_03888fb8;
      auVar181._0_8_ = _DAT_03888fb0;
      fStack_268 = fStack_258;
      fStack_264 = fStack_254;
      local_270 = local_260;
      fStack_26c = fStack_25c;
      fStack_258 = fVar155;
      fStack_254 = fVar190;
      local_260 = fVar448;
      fStack_25c = fVar210;
      auVar401 = a64_TBL(ZEXT816(0),auVar401,auVar181);
    }
    uStack_1a8 = auVar401._8_8_;
    local_1b0 = auVar401._0_8_;
  }
LAB_001ce604:
  bVar12 = false;
  local_1a0 = local_b0;
  fVar406 = local_210[1];
  fVar189 = fStack_204;
  pauVar20 = local_168;
  pauVar1 = local_158;
  uVar328 = local_150;
  uVar25 = local_b0;
  uVar37 = local_ac[0];
joined_r0x001ce298:
  if (uVar3 == 0) {
    bVar23 = false;
LAB_001ce618:
    uVar24 = (ulong)uVar37;
  }
  else {
    if ((uint)uVar24 != uVar37) {
      bVar23 = true;
      goto LAB_001ce618;
    }
    bVar23 = (uint)uVar26 != uVar25;
  }
  uVar316 = (uint)uVar24;
  uVar26 = (ulong)uVar25;
  fVar210 = (float)local_b8 * 1.3;
  local_b8 = CONCAT44((float)((ulong)local_b8 >> 0x20) * 1.3,fVar210);
  fVar448 = (float)local_2c0;
  local_210[1] = fVar406;
  fStack_204 = fVar189;
  local_168 = pauVar20;
  local_158 = pauVar1;
  local_150 = uVar328;
  local_b0 = uVar25;
  local_ac[0] = uVar37;
  if (bVar12) {
LAB_001cfa94:
    bVar22 = fVar448 == 0.0;
LAB_001cfabc:
    auVar45 = param_5[4];
    local_120 = *(undefined8 *)param_5[3];
    uStack_118 = *(undefined8 *)(param_5[3] + 8);
    uStack_128 = *(undefined8 *)(param_5[2] + 8);
    uStack_138 = *(undefined8 *)(param_5[1] + 8);
    local_140 = *(undefined8 *)*pauVar2;
    auVar250._0_8_ =
         CONCAT44(*(float *)(param_5[3] + 4) * local_280[2] +
                  *(float *)(param_5[1] + 4) * local_280[0] +
                  *(float *)(param_5[2] + 4) * local_280[1] + auVar45._4_4_,
                  *(float *)param_5[3] * local_280[2] +
                  *(float *)*pauVar2 * local_280[0] + *(float *)param_5[2] * local_280[1] +
                  auVar45._0_4_);
    auVar250._8_4_ =
         *(float *)(param_5[3] + 8) * local_280[2] +
         *(float *)(param_5[1] + 8) * local_280[0] + *(float *)(param_5[2] + 8) * local_280[1] +
         auVar45._8_4_;
    auVar250._12_4_ =
         *(float *)(param_5[3] + 0xc) * local_280[2] +
         *(float *)(param_5[1] + 0xc) * local_280[0] + *(float *)(param_5[2] + 0xc) * local_280[1] +
         auVar45._12_4_;
    local_130 = *(undefined8 *)param_5[2];
    uStack_108 = auVar250._8_8_;
    local_110 = auVar250._0_8_;
    FUN_001d109c(&local_270,&local_148,&local_158,&local_168,&local_140,&local_b8,local_ac,&local_b0
                 ,local_100,&fStack_d0);
    param_6[3] = uStack_d8;
    param_6[2] = local_e0;
    *(float *)(param_6 + 5) = fStack_c8;
    *(float *)((long)param_6 + 0x2c) = fStack_c4;
    *(float *)(param_6 + 4) = fStack_d0;
    *(float *)((long)param_6 + 0x24) = fStack_cc;
    uVar25 = local_b0;
    uVar316 = local_ac[0];
    if (bVar22) {
      param_6[1] = CONCAT44((float)((ulong)local_100[0] >> 0x20) -
                            (float)((ulong)*(undefined8 *)param_5[6] >> 0x20),
                            (float)local_100[0] - (float)*(undefined8 *)param_5[6]);
      if (param_7 != (undefined8 *)0x0) {
        *param_7 = *param_6;
        param_7[1] = param_6[1];
        uVar90 = param_6[2];
        param_7[3] = param_6[3];
        param_7[2] = uVar90;
        uVar90 = param_6[4];
        uVar38 = param_6[5];
        *(undefined4 *)(param_7 + 6) = 1;
        param_7[5] = uVar38;
        param_7[4] = uVar90;
      }
      if ((uVar3 != 0) ||
         (auVar45._0_4_ = fStack_d0 * *(float *)*param_5,
         auVar45._4_4_ = fStack_cc * *(float *)(*param_5 + 4),
         auVar45._8_4_ = fStack_c8 * *(float *)(*param_5 + 8),
         auVar45._12_4_ = fStack_c4 * *(float *)(*param_5 + 0xc),
         auVar250 = NEON_ext(auVar45,auVar45,8,1),
         auVar45._0_4_ + auVar45._4_4_ + auVar250._0_4_ <= -1.9073486e-06)) {
        *(undefined4 *)(param_6 + 6) = 1;
        *param_6 = 0;
      }
    }
    else {
      *param_6 = local_2c0;
      param_6[1] = 0;
      *(undefined4 *)(param_6 + 6) = 1;
    }
    goto joined_r0x001cfbec;
  }
  fVar206 = in_q8._0_4_;
  fVar209 = in_q8._4_4_;
  fVar354 = in_q8._8_4_;
  fVar356 = in_q8._12_4_;
  fVar155 = fVar354 * fVar354 + fVar206 * fVar206 + fVar209 * fVar209;
  fVar190 = fVar354 * fVar354 + fVar206 * fVar206 + fVar209 * fVar209;
  uVar125 = CONCAT44(fVar190,fVar155);
  if (fVar155 < fVar210 * fVar210 * fVar210 * fVar210) goto LAB_001cfa94;
  uVar91 = NEON_frsqrte(uVar125,4);
  fVar87 = (float)uVar91;
  fVar113 = (float)((ulong)uVar91 >> 0x20);
  uVar91 = NEON_frsqrts(uVar125,CONCAT44(fVar113 * fVar113,fVar87 * fVar87),4);
  fVar87 = fVar87 * (float)uVar91;
  fVar113 = fVar113 * (float)((ulong)uVar91 >> 0x20);
  uVar125 = NEON_frsqrts(uVar125,CONCAT44(fVar113 * fVar113,fVar87 * fVar87),4);
  fVar87 = (float)uVar125 * fVar87;
  fVar113 = (float)((ulong)uVar125 >> 0x20) * fVar113;
  iVar335 = -(uint)(fVar155 <= 0.0);
  iVar351 = -(uint)(fVar190 <= 0.0);
  fVar155 = (float)CONCAT13((byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar335 >> 0x18),
                            CONCAT12((byte)((uint)fVar87 >> 0x10) & ~(byte)((uint)iVar335 >> 0x10),
                                     CONCAT11((byte)((uint)fVar87 >> 8) &
                                              ~(byte)((uint)iVar335 >> 8),
                                              SUB41(fVar87,0) & ~(byte)iVar335)));
  fVar87 = (local_270 - local_210[0]) * fVar206;
  fVar114 = (fStack_26c - fVar406) * fVar209;
  fVar118 = (fStack_268 - local_210[2]) * fVar354;
  fVar212 = fVar155 * (fVar87 + fVar114 + fVar118);
  fVar190 = (float)(CONCAT17((byte)((uint)fVar113 >> 0x18) & ~(byte)((uint)iVar351 >> 0x18),
                             CONCAT16((byte)((uint)fVar113 >> 0x10) & ~(byte)((uint)iVar351 >> 0x10)
                                      ,CONCAT15((byte)((uint)fVar113 >> 8) &
                                                ~(byte)((uint)iVar351 >> 8),
                                                CONCAT14(SUB41(fVar113,0) & ~(byte)iVar351,fVar155))
                                     )) >> 0x20);
  uVar125 = CONCAT44(fVar190 * (fVar87 + fVar114 + fVar118),fVar212);
  fVar206 = fVar155 * fVar206;
  fVar209 = fVar190 * fVar209;
  in_q8._0_8_ = CONCAT44(fVar209,fVar206);
  in_q8._8_4_ = fVar155 * fVar354;
  in_q8._12_4_ = fVar190 * fVar356;
  if (fVar212 < fVar210) {
    bVar22 = true;
    if (fVar448 == 0.0) goto LAB_001cfabc;
    *(undefined4 *)(param_6 + 6) = 1;
    if ((uVar4 | 1) == 0) goto LAB_001cfd18;
    goto LAB_001cfc84;
  }
  fVar155 = -fVar206;
  fVar190 = -fVar209;
  fVar354 = -in_q8._8_4_;
  fVar356 = -in_q8._12_4_;
  lVar28 = 4;
  iVar335 = auVar76._0_4_;
  iVar351 = auVar76._4_4_;
  iVar353 = auVar76._8_4_;
  iVar355 = auVar76._12_4_;
  auVar253 = auVar76;
  switch(uVar328 & 3) {
  case 0:
switchD_001ce6e4_caseD_0:
    auVar156 = *pauVar1;
    auVar252 = *(undefined1 (*) [16])(*pauVar1 + 0xc);
    auVar224 = NEON_ext(auVar156,auVar156,8,1);
    auVar230 = NEON_ext(auVar252,auVar252,8,1);
    auVar346._0_4_ = fVar354 * auVar224._0_4_ + fVar155 * auVar156._0_4_ + fVar190 * auVar156._4_4_;
    auVar346._4_4_ = fVar354 * auVar230._0_4_ + fVar155 * auVar252._0_4_ + fVar190 * auVar252._4_4_;
    auVar346._8_4_ =
         fVar354 * *(float *)pauVar1[2] +
         fVar155 * *(float *)(pauVar1[1] + 8) + fVar190 * *(float *)(pauVar1[1] + 0xc);
    auVar346._12_4_ =
         fVar354 * *(float *)(pauVar1[2] + 0xc) +
         fVar155 * *(float *)(pauVar1[2] + 4) + fVar190 * *(float *)(pauVar1[2] + 8);
    if ((int)lVar28 < (int)uVar328) {
LAB_001ce87c:
      iVar83 = (int)lVar28;
      pauVar35 = (undefined1 (*) [16])(pauVar1[1] + lVar28 * 0xc + 8);
      auVar403._0_4_ = iVar83 + iVar335;
      auVar403._4_4_ = iVar83 + iVar351;
      auVar403._8_4_ = iVar83 + iVar353;
      auVar403._12_4_ = iVar83 + iVar355;
      do {
        auVar156 = *(undefined1 (*) [16])(pauVar35[-2] + 8);
        lVar28 = lVar28 + 4;
        auVar252 = *(undefined1 (*) [16])(pauVar35[-1] + 4);
        auVar224 = *pauVar35;
        auVar230 = *(undefined1 (*) [16])(*pauVar35 + 0xc);
        auVar432 = NEON_ext(auVar156,auVar156,8,1);
        auVar358 = NEON_ext(auVar252,auVar252,8,1);
        auVar411 = NEON_ext(auVar224,auVar224,8,1);
        pauVar35 = pauVar35 + 3;
        auVar450 = NEON_ext(auVar230,auVar230,8,1);
        auVar58._0_4_ =
             fVar354 * auVar432._0_4_ + fVar155 * auVar156._0_4_ + fVar190 * auVar156._4_4_;
        auVar58._4_4_ =
             fVar354 * auVar358._0_4_ + fVar155 * auVar252._0_4_ + fVar190 * auVar252._4_4_;
        auVar58._8_4_ =
             fVar354 * auVar411._0_4_ + fVar155 * auVar224._0_4_ + fVar190 * auVar224._4_4_;
        auVar58._12_4_ =
             fVar354 * auVar450._0_4_ + fVar155 * auVar230._0_4_ + fVar190 * auVar230._4_4_;
        auVar280._0_4_ = -(uint)(auVar346._0_4_ < auVar58._0_4_);
        auVar280._4_4_ = -(uint)(auVar346._4_4_ < auVar58._4_4_);
        auVar280._8_4_ = -(uint)(auVar346._8_4_ < auVar58._8_4_);
        auVar280._12_4_ = -(uint)(auVar346._12_4_ < auVar58._12_4_);
        auVar346 = NEON_fmax(auVar58,auVar346,4);
        auVar253 = auVar253 ^ (auVar253 ^ auVar403) & auVar280;
        auVar404._0_4_ = auVar403._0_4_ + iVar147;
        auVar404._4_4_ = auVar403._4_4_ + iVar151;
        auVar404._8_4_ = auVar403._8_4_ + iVar13;
        auVar404._12_4_ = auVar403._12_4_ + iVar14;
        auVar403 = auVar404;
      } while (lVar28 < (int)uVar328);
    }
    break;
  case 1:
    fVar356 = *(float *)*pauVar1 * fVar155;
    fVar87 = *(float *)(*pauVar1 + 4) * fVar190;
    fVar113 = *(float *)(*pauVar1 + 8) * fVar354;
    auVar346._0_8_ = CONCAT44(fVar356 + fVar87 + fVar113,fVar356 + fVar87 + fVar113);
    auVar346._8_8_ = auVar346._0_8_;
    lVar28 = 1;
    auVar253 = ZEXT816(0);
    if (1 < (int)uVar328) goto LAB_001ce87c;
    break;
  case 2:
    auVar56._0_4_ = *(float *)*pauVar1 * fVar155;
    auVar56._4_4_ = *(float *)(*pauVar1 + 4) * fVar190;
    auVar56._8_4_ = *(float *)(*pauVar1 + 8) * fVar354;
    auVar56._12_4_ = *(float *)(*pauVar1 + 0xc) * fVar356;
    auVar100._0_4_ = *(float *)(*pauVar1 + 0xc) * fVar155;
    auVar100._4_4_ = *(float *)pauVar1[1] * fVar190;
    auVar100._8_4_ = *(float *)(pauVar1[1] + 4) * fVar354;
    auVar100._12_4_ = *(float *)(pauVar1[1] + 8) * fVar356;
    auVar156 = NEON_ext(auVar56,auVar56,8,1);
    auVar252 = NEON_ext(auVar100,auVar100,8,1);
    auVar346._4_4_ = auVar100._0_4_ + auVar100._4_4_ + auVar252._0_4_;
    auVar346._0_4_ = auVar56._0_4_ + auVar56._4_4_ + auVar156._0_4_;
    lVar28 = 2;
    auVar346._8_8_ = uVar149;
    if (2 < (int)uVar328) goto LAB_001ce87c;
    break;
  case 3:
    if (uVar328 != 3) {
      lVar28 = 3;
      goto switchD_001ce6e4_caseD_0;
    }
    auVar57._0_4_ = (float)*(undefined8 *)*pauVar1 * fVar155;
    auVar57._4_4_ = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20) * fVar190;
    auVar57._8_4_ = *(float *)(*pauVar1 + 8) * fVar354;
    auVar57._12_4_ = *(float *)(*pauVar1 + 8) * fVar356;
    auVar101._0_4_ = (float)*(undefined8 *)(*pauVar1 + 0xc) * fVar155;
    auVar101._4_4_ = (float)((ulong)*(undefined8 *)(*pauVar1 + 0xc) >> 0x20) * fVar190;
    auVar101._8_4_ = *(float *)(pauVar1[1] + 4) * fVar354;
    auVar101._12_4_ = *(float *)(pauVar1[1] + 4) * fVar356;
    auVar137._0_4_ = (float)*(undefined8 *)(pauVar1[1] + 8) * fVar155;
    auVar137._4_4_ = (float)((ulong)*(undefined8 *)(pauVar1[1] + 8) >> 0x20) * fVar190;
    auVar137._8_4_ = *(float *)pauVar1[2] * fVar354;
    auVar137._12_4_ = *(float *)pauVar1[2] * fVar356;
    auVar253 = NEON_ext(auVar57,auVar57,8,1);
    auVar156 = NEON_ext(auVar101,auVar101,8,1);
    auVar252 = NEON_ext(auVar137,auVar137,8,1);
    fVar155 = auVar253._0_4_ + auVar57._0_4_ + auVar57._4_4_;
    fVar190 = auVar156._0_4_ + auVar101._0_4_ + auVar101._4_4_;
    uVar125 = CONCAT44(fVar190,fVar155);
    fVar354 = auVar252._0_4_ + auVar137._0_4_ + auVar137._4_4_;
    uVar125 = NEON_fmaxp(uVar125,uVar125,4);
    uVar125 = NEON_fmax(CONCAT44(fVar354,fVar354),uVar125,4);
    uVar34 = (ulong)(char)PTR_DAT_043723d0
                          [(-(uint)((float)((ulong)uVar125 >> 0x20) <= fVar190) & 2) +
                           (uint)((float)uVar125 <= fVar155) |
                           -(uint)((float)uVar125 <= fVar354) & 4];
    pfVar30 = (float *)(*pauVar1 + uVar34 * 0xc);
    fVar155 = *pfVar30;
    fVar190 = pfVar30[1];
    fVar354 = pfVar30[2];
    goto LAB_001ce93c;
  }
  auVar156 = NEON_rev64(auVar346,4);
  auVar102._0_4_ = -(uint)(auVar156._0_4_ <= auVar346._0_4_);
  auVar102._4_4_ = -(uint)(auVar156._4_4_ <= auVar346._4_4_);
  auVar102._8_4_ = -(uint)(auVar156._8_4_ <= auVar346._8_4_);
  auVar102._12_4_ = -(uint)(auVar156._12_4_ <= auVar346._12_4_);
  auVar156 = NEON_fmax(auVar346,auVar156,4);
  auVar252 = NEON_rev64(auVar253,4);
  auVar252 = auVar252 ^ (auVar252 ^ auVar253) & auVar102;
  auVar253 = NEON_ext(auVar156,auVar156,8,1);
  auVar224 = NEON_ext(auVar252,auVar252,8,1);
  uVar376 = auVar224._0_8_ ^
            (auVar224._0_8_ ^ auVar252._0_8_) & (ulong)-(uint)(auVar253._0_4_ <= auVar156._0_4_);
  uVar34 = uVar376 & 0xffffffff;
  pfVar30 = (float *)(*pauVar1 + (long)(int)uVar376 * 0xc);
  fVar155 = *pfVar30;
  fVar190 = pfVar30[1];
  fVar354 = pfVar30[2];
LAB_001ce93c:
  fVar356 = (float)((uint)uVar34 | 0x3f000000);
  auVar253 = param_5[3];
  lVar28 = 4;
  auVar156 = *pauVar2;
  auVar252 = param_5[2];
  fVar87 = auVar253._0_4_ * in_q8._8_4_ + auVar156._0_4_ * fVar206 + auVar252._0_4_ * fVar209;
  fVar113 = auVar253._4_4_ * in_q8._8_4_ + auVar156._4_4_ * fVar206 + auVar252._4_4_ * fVar209;
  fVar114 = auVar253._8_4_ * in_q8._8_4_ + auVar156._8_4_ * fVar206 + auVar252._8_4_ * fVar209;
  fVar118 = auVar253._12_4_ * in_q8._8_4_ + auVar156._12_4_ * fVar206 + auVar252._12_4_ * fVar209;
  auVar224 = auVar76;
  switch(local_160 & 3) {
  case 0:
switchD_001ce990_caseD_0:
    auVar230 = *pauVar20;
    auVar432 = *(undefined1 (*) [16])(*pauVar20 + 0xc);
    auVar358 = NEON_ext(auVar230,auVar230,8,1);
    auVar450 = NEON_ext(auVar432,auVar432,8,1);
    auVar347._0_4_ = fVar114 * auVar358._0_4_ + fVar87 * auVar230._0_4_ + fVar113 * auVar230._4_4_;
    auVar347._4_4_ = fVar114 * auVar450._0_4_ + fVar87 * auVar432._0_4_ + fVar113 * auVar432._4_4_;
    auVar347._8_4_ =
         fVar114 * *(float *)pauVar20[2] +
         fVar87 * *(float *)(pauVar20[1] + 8) + fVar113 * *(float *)(pauVar20[1] + 0xc);
    auVar347._12_4_ =
         fVar114 * *(float *)(pauVar20[2] + 0xc) +
         fVar87 * *(float *)(pauVar20[2] + 4) + fVar113 * *(float *)(pauVar20[2] + 8);
    if ((int)lVar28 < (int)local_160) {
LAB_001ceb28:
      iVar83 = (int)lVar28;
      pauVar35 = (undefined1 (*) [16])(pauVar20[1] + lVar28 * 0xc + 8);
      auVar414._0_4_ = iVar83 + iVar335;
      auVar414._4_4_ = iVar83 + iVar351;
      auVar414._8_4_ = iVar83 + iVar353;
      auVar414._12_4_ = iVar83 + iVar355;
      do {
        auVar230 = *(undefined1 (*) [16])(pauVar35[-2] + 8);
        lVar28 = lVar28 + 4;
        auVar432 = *(undefined1 (*) [16])(pauVar35[-1] + 4);
        auVar358 = *pauVar35;
        auVar450 = *(undefined1 (*) [16])(*pauVar35 + 0xc);
        auVar411 = NEON_ext(auVar230,auVar230,8,1);
        auVar435 = NEON_ext(auVar432,auVar432,8,1);
        auVar139 = NEON_ext(auVar358,auVar358,8,1);
        pauVar35 = pauVar35 + 3;
        auVar105 = NEON_ext(auVar450,auVar450,8,1);
        auVar61._0_4_ =
             fVar114 * auVar411._0_4_ + fVar87 * auVar230._0_4_ + fVar113 * auVar230._4_4_;
        auVar61._4_4_ =
             fVar114 * auVar435._0_4_ + fVar87 * auVar432._0_4_ + fVar113 * auVar432._4_4_;
        auVar61._8_4_ =
             fVar114 * auVar139._0_4_ + fVar87 * auVar358._0_4_ + fVar113 * auVar358._4_4_;
        auVar61._12_4_ =
             fVar114 * auVar105._0_4_ + fVar87 * auVar450._0_4_ + fVar113 * auVar450._4_4_;
        auVar281._0_4_ = -(uint)(auVar347._0_4_ < auVar61._0_4_);
        auVar281._4_4_ = -(uint)(auVar347._4_4_ < auVar61._4_4_);
        auVar281._8_4_ = -(uint)(auVar347._8_4_ < auVar61._8_4_);
        auVar281._12_4_ = -(uint)(auVar347._12_4_ < auVar61._12_4_);
        auVar347 = NEON_fmax(auVar61,auVar347,4);
        auVar224 = auVar224 ^ (auVar224 ^ auVar414) & auVar281;
        auVar415._0_4_ = auVar414._0_4_ + iVar147;
        auVar415._4_4_ = auVar414._4_4_ + iVar151;
        auVar415._8_4_ = auVar414._8_4_ + iVar13;
        auVar415._12_4_ = auVar414._12_4_ + iVar14;
        auVar414 = auVar415;
      } while (lVar28 < (int)local_160);
    }
    break;
  case 1:
    fVar118 = fVar87 * *(float *)*pauVar20;
    fVar212 = fVar113 * *(float *)(*pauVar20 + 4);
    fVar289 = fVar114 * *(float *)(*pauVar20 + 8);
    auVar347._0_8_ = CONCAT44(fVar118 + fVar212 + fVar289,fVar118 + fVar212 + fVar289);
    auVar347._8_8_ = auVar347._0_8_;
    lVar28 = 1;
    auVar224 = ZEXT816(0);
    if (1 < (int)local_160) goto LAB_001ceb28;
    break;
  case 2:
    auVar59._0_4_ = fVar87 * *(float *)*pauVar20;
    auVar59._4_4_ = fVar113 * *(float *)(*pauVar20 + 4);
    auVar59._8_4_ = fVar114 * *(float *)(*pauVar20 + 8);
    auVar59._12_4_ = fVar118 * *(float *)(*pauVar20 + 0xc);
    auVar103._0_4_ = fVar87 * *(float *)(*pauVar20 + 0xc);
    auVar103._4_4_ = fVar113 * *(float *)pauVar20[1];
    auVar103._8_4_ = fVar114 * *(float *)(pauVar20[1] + 4);
    auVar103._12_4_ = fVar118 * *(float *)(pauVar20[1] + 8);
    auVar230 = NEON_ext(auVar59,auVar59,8,1);
    auVar432 = NEON_ext(auVar103,auVar103,8,1);
    auVar347._4_4_ = auVar103._0_4_ + auVar103._4_4_ + auVar432._0_4_;
    auVar347._0_4_ = auVar59._0_4_ + auVar59._4_4_ + auVar230._0_4_;
    lVar28 = 2;
    auVar347._8_8_ = uVar149;
    if (2 < (int)local_160) goto LAB_001ceb28;
    break;
  case 3:
    if (local_160 != 3) {
      lVar28 = 3;
      goto switchD_001ce990_caseD_0;
    }
    auVar60._0_4_ = fVar87 * (float)*(undefined8 *)*pauVar20;
    auVar60._4_4_ = fVar113 * (float)((ulong)*(undefined8 *)*pauVar20 >> 0x20);
    auVar60._8_4_ = fVar114 * *(float *)(*pauVar20 + 8);
    auVar60._12_4_ = fVar118 * *(float *)(*pauVar20 + 8);
    auVar104._0_4_ = fVar87 * (float)*(undefined8 *)(*pauVar20 + 0xc);
    auVar104._4_4_ = fVar113 * (float)((ulong)*(undefined8 *)(*pauVar20 + 0xc) >> 0x20);
    auVar104._8_4_ = fVar114 * *(float *)(pauVar20[1] + 4);
    auVar104._12_4_ = fVar118 * *(float *)(pauVar20[1] + 4);
    auVar138._0_4_ = fVar87 * (float)*(undefined8 *)(pauVar20[1] + 8);
    auVar138._4_4_ = fVar113 * (float)((ulong)*(undefined8 *)(pauVar20[1] + 8) >> 0x20);
    auVar138._8_4_ = fVar114 * *(float *)pauVar20[2];
    auVar138._12_4_ = fVar118 * *(float *)pauVar20[2];
    auVar224 = NEON_ext(auVar60,auVar60,8,1);
    auVar230 = NEON_ext(auVar104,auVar104,8,1);
    auVar432 = NEON_ext(auVar138,auVar138,8,1);
    fVar87 = auVar224._0_4_ + auVar60._0_4_ + auVar60._4_4_;
    fVar113 = auVar230._0_4_ + auVar104._0_4_ + auVar104._4_4_;
    uVar125 = CONCAT44(fVar113,fVar87);
    fVar114 = auVar432._0_4_ + auVar138._0_4_ + auVar138._4_4_;
    uVar125 = NEON_fmaxp(uVar125,uVar125,4);
    uVar125 = NEON_fmax(CONCAT44(fVar114,fVar114),uVar125,4);
    uVar338 = (ulong)(char)PTR_DAT_043723d0
                           [(-(uint)((float)((ulong)uVar125 >> 0x20) <= fVar113) & 2) +
                            (uint)((float)uVar125 <= fVar87) |
                            -(uint)((float)uVar125 <= fVar114) & 4];
    auVar92 = *(undefined1 (*) [12])(*pauVar20 + uVar338 * 0xc);
    goto LAB_001cebe4;
  }
  auVar230 = NEON_rev64(auVar347,4);
  auVar106._0_4_ = -(uint)(auVar230._0_4_ <= auVar347._0_4_);
  auVar106._4_4_ = -(uint)(auVar230._4_4_ <= auVar347._4_4_);
  auVar106._8_4_ = -(uint)(auVar230._8_4_ <= auVar347._8_4_);
  auVar106._12_4_ = -(uint)(auVar230._12_4_ <= auVar347._12_4_);
  auVar230 = NEON_fmax(auVar347,auVar230,4);
  auVar432 = NEON_rev64(auVar224,4);
  auVar432 = auVar432 ^ (auVar432 ^ auVar224) & auVar106;
  auVar224 = NEON_ext(auVar230,auVar230,8,1);
  auVar358 = NEON_ext(auVar432,auVar432,8,1);
  uVar34 = auVar358._0_8_ ^
           (auVar358._0_8_ ^ auVar432._0_8_) & (ulong)-(uint)(auVar224._0_4_ <= auVar230._0_4_);
  uVar338 = uVar34 & 0xffffffff;
  auVar92 = SUB1612(*(undefined1 (*) [16])(*pauVar20 + (long)(int)uVar34 * 0xc),0);
LAB_001cebe4:
  auVar224 = NEON_ext(auVar156,auVar156,8,1);
  auVar230 = NEON_ext(auVar252,auVar252,8,1);
  auVar432 = NEON_ext(auVar253,auVar253,8,1);
  fVar87 = auVar92._0_4_ - *(float *)param_5[4];
  fVar113 = auVar92._4_4_ - *(float *)(param_5[4] + 4);
  fVar114 = auVar92._8_4_ - *(float *)(param_5[4] + 8);
  lVar28 = (long)(int)uVar25;
  local_210[lVar28 * 4 + 2] = local_210[2];
  local_210[lVar28 * 4 + 3] = fVar189;
  local_210[lVar28 * 4] = local_210[0];
  local_210[lVar28 * 4 + 1] = fVar406;
  uVar34 = (long)(int)uVar25 + 1;
  lVar27 = (long)(int)uVar316;
  iVar83 = uVar316 + uVar25;
  *(ulong *)(local_210 + uVar34 * 4 + 2) = CONCAT44(fStack_204,local_210[2]);
  *(ulong *)(local_210 + uVar34 * 4) = CONCAT44(local_210[1],local_210[0]);
  fVar118 = (auVar224._0_4_ * fVar114 + auVar156._0_4_ * fVar87 + auVar156._4_4_ * fVar113) -
            local_280[0];
  fVar212 = (auVar230._0_4_ * fVar114 + auVar252._0_4_ * fVar87 + auVar252._4_4_ * fVar113) -
            local_280[1];
  fVar114 = (auVar432._0_4_ * fVar114 + auVar253._0_4_ * fVar87 + auVar253._4_4_ * fVar113) -
            local_280[2];
  uVar376 = lVar27 + 1;
  *(ulong *)(local_210 + (long)(int)uVar316 * 4 + -0x16) = CONCAT44(fStack_264,fStack_268);
  *(ulong *)(local_280 + (long)(int)uVar316 * 4 + 4) = CONCAT44(fStack_26c,local_270);
  *(ulong *)(local_210 + uVar376 * 4 + -0x16) = CONCAT44(fStack_264,fStack_268);
  *(ulong *)(local_280 + uVar376 * 4 + 4) = CONCAT44(fStack_26c,local_270);
  auVar16._4_4_ = fStack_26c;
  auVar16._0_4_ = local_270;
  auVar16._8_4_ = fStack_268;
  auVar16._12_4_ = fStack_264;
  fVar406 = fVar206 * (fVar155 - fVar118);
  fVar189 = fVar209 * (fVar190 - fVar212);
  fVar87 = in_q8._8_4_ * (fVar354 - fVar114);
  auVar228._4_4_ = local_210[1];
  auVar228._0_4_ = local_210[0];
  auVar228._8_4_ = local_210[2];
  auVar228._12_4_ = fStack_204;
  fVar113 = fVar406 + fVar189 + fVar87;
  fVar87 = fVar406 + fVar189 + fVar87;
  uVar125 = CONCAT44(fVar87,fVar113);
  auVar62._0_4_ = fVar206 * (local_270 - fVar155);
  auVar62._4_4_ = fVar209 * (fStack_26c - fVar190);
  auVar62._8_4_ = in_q8._8_4_ * (fStack_268 - fVar354);
  auVar62._12_4_ = in_q8._12_4_ * (fStack_264 - fVar356);
  auVar253 = NEON_ext(auVar62,auVar62,8,1);
  fVar289 = auVar62._0_4_ + auVar62._4_4_ + auVar253._0_4_;
  fVar189 = fVar206 * (fVar118 - local_210[0]) + fVar209 * (fVar212 - local_210[1]) +
            in_q8._8_4_ * (fVar114 - local_210[2]);
  uVar29 = (uint)uVar376;
  fVar406 = (float)((ulong)local_2c0 >> 0x20);
  uVar36 = uVar3;
  if (iVar83 == 2) {
    if (fVar289 <= fVar210) {
      if (fVar189 <= fVar210) goto LAB_001ced40;
    }
    else {
      if (fVar189 <= fVar210) goto LAB_001ced20;
      local_ac[0] = uVar29;
      local_210[lVar27 * 4 + -0x16] = fVar354;
      local_210[lVar27 * 4 + -0x15] = fVar356;
      local_280[lVar27 * 4 + 4] = fVar155;
      local_280[lVar27 * 4 + 5] = fVar190;
      uVar37 = uVar29;
    }
LAB_001ceda4:
    local_b0 = (uint)uVar34;
    local_210[lVar28 * 4 + 2] = fVar114;
    local_210[lVar28 * 4 + 3] = (float)((uint)uVar338 | 0x3f000000);
    local_210[lVar28 * 4] = fVar118;
    local_210[lVar28 * 4 + 1] = fVar212;
    uVar376 = (ulong)uVar37;
    if (param_7 == (undefined8 *)0x0) goto LAB_001cf2b8;
LAB_001cedbc:
  }
  else {
    if (fVar289 <= fVar189) {
      fVar354 = fVar206 * (fVar118 - (float)local_1f0);
      fVar356 = fVar209 * (fVar212 - local_1f0._4_4_);
      fVar289 = in_q8._8_4_ * (fVar114 - (float)uStack_1e8);
      fVar189 = fVar206 * (fVar118 - local_200);
      fVar155 = fVar209 * (fVar212 - fStack_1fc);
      fVar190 = in_q8._8_4_ * (fVar114 - fStack_1f8);
      uVar91 = NEON_fmin(CONCAT44(fVar189 + fVar155 + fVar190,fVar189 + fVar155 + fVar190),
                         CONCAT44(fVar354 + fVar356 + fVar289,fVar354 + fVar356 + fVar289),4);
      if (fVar210 < (float)uVar91) goto LAB_001ceda4;
    }
    else {
      fVar212 = fVar206 * (fStack_250 - fVar155);
      fVar289 = fVar209 * (fStack_24c - fVar190);
      fVar204 = in_q8._8_4_ * (fStack_248 - fVar354);
      fVar189 = fVar206 * (local_260 - fVar155);
      fVar114 = fVar209 * (fStack_25c - fVar190);
      fVar118 = in_q8._8_4_ * (fStack_258 - fVar354);
      uVar91 = NEON_fmin(CONCAT44(fVar189 + fVar114 + fVar118,fVar189 + fVar114 + fVar118),
                         CONCAT44(fVar212 + fVar289 + fVar204,fVar212 + fVar289 + fVar204),4);
      if (fVar210 < (float)uVar91) {
LAB_001ced20:
        uVar34 = (ulong)uVar25;
        local_ac[0] = uVar29;
        local_210[lVar27 * 4 + -0x16] = fVar354;
        local_210[lVar27 * 4 + -0x15] = fVar356;
        local_280[lVar27 * 4 + 4] = fVar155;
        local_280[lVar27 * 4 + 5] = fVar190;
        if (param_7 != (undefined8 *)0x0) goto LAB_001cedbc;
        goto LAB_001cf2b8;
      }
    }
LAB_001ced40:
    if (param_7 != (undefined8 *)0x0) {
      auVar187 = auVar16;
      if (uVar316 != 1) {
        if (uVar25 == 1) {
          auVar187._0_4_ = local_210[0] + fVar206 * fVar113;
          auVar187._4_4_ = local_210[1] + fVar209 * fVar87;
          auVar187._8_4_ = local_210[2] + in_q8._8_4_ * fVar113;
          auVar187._12_4_ = fStack_204 + in_q8._12_4_ * fVar87;
        }
        else {
          auVar187._4_4_ = fStack_17c;
          auVar187._0_4_ = local_180;
          auVar187._8_4_ = fStack_178;
          auVar187._12_4_ = fStack_174;
        }
      }
      param_7[3] = auVar187._8_8_;
      param_7[2] = auVar187._0_8_;
      param_7[5] = in_q8._8_8_;
      param_7[4] = in_q8._0_8_;
      uVar91 = *(undefined8 *)param_5[6];
      *(undefined4 *)(param_7 + 6) = 1;
      param_7[1] = CONCAT44(fVar87 - (float)((ulong)uVar91 >> 0x20),fVar113 - (float)uVar91);
    }
    fVar155 = (float)*(undefined8 *)param_5[6];
    fVar189 = (float)((ulong)*(undefined8 *)param_5[6] >> 0x20);
    if (fVar113 <= (float)uVar38 + fVar155) {
      if (uVar3 == 0) {
        auVar76._0_4_ = fVar123 * fVar206;
        auVar76._4_4_ = fVar124 * fVar209;
        auVar76._8_4_ = fVar143 * in_q8._8_4_;
        auVar76._12_4_ = in_q8._12_4_ * 0.0;
        auVar45 = NEON_ext(auVar76,auVar76,8,1);
        if (-1.9073486e-06 < auVar45._0_4_ + auVar76._0_4_ + auVar76._4_4_) {
LAB_001cfcec:
          goto joined_r0x001cfcf0;
        }
      }
LAB_001cfcbc:
      iVar147 = 1;
      *(undefined4 *)(param_6 + 6) = 1;
LAB_001cfd04:
      if (iVar147 == 0 && uVar4 == 0) {
LAB_001cfd18:
        if ((int)uVar25 < (int)local_b0) {
          lVar28 = (long)(int)(local_b0 - 1);
          fVar84 = (float)((ulong)uVar125 >> 0x20);
          local_270 = (float)uVar125 * in_q8._0_4_ + local_210[lVar28 * 4];
          fStack_26c = fVar84 * in_q8._4_4_ + local_210[lVar28 * 4 + 1];
          fStack_268 = (float)uVar125 * in_q8._8_4_ + local_210[lVar28 * 4 + 2];
          fStack_174 = fVar84 * in_q8._12_4_ + local_210[lVar28 * 4 + 3];
        }
        else {
          lVar28 = (long)(int)local_ac[0];
          local_270 = local_280[lVar28 * 4];
          fStack_26c = local_280[lVar28 * 4 + 1];
          fStack_268 = local_280[lVar28 * 4 + 2];
          fStack_174 = local_280[lVar28 * 4 + 3];
        }
      }
      else {
LAB_001cfc84:
        if (uVar316 == 1) {
          fStack_174 = fStack_264;
        }
        else if (uVar25 == 1) {
          fVar84 = (float)((ulong)uVar125 >> 0x20);
          local_270 = (float)uVar125 * in_q8._0_4_ + local_210[0];
          fStack_26c = fVar84 * in_q8._4_4_ + local_210[1];
          fStack_268 = (float)uVar125 * in_q8._8_4_ + local_210[2];
          fStack_174 = fVar84 * in_q8._12_4_ + fStack_204;
        }
        else {
          local_270 = local_180;
          fStack_26c = fStack_17c;
          fStack_268 = fStack_178;
        }
      }
      *(float *)(param_6 + 3) = fStack_268;
      *(float *)((long)param_6 + 0x1c) = fStack_174;
      *(float *)(param_6 + 2) = local_270;
      *(float *)((long)param_6 + 0x14) = fStack_26c;
      param_6[5] = in_q8._8_8_;
      param_6[4] = in_q8._0_8_;
      param_6[1] = CONCAT44((float)((ulong)uVar125 >> 0x20) -
                            (float)((ulong)*(undefined8 *)param_5[6] >> 0x20),
                            (float)uVar125 - (float)*(undefined8 *)param_5[6]);
      *param_6 = local_2c0;
joined_r0x001cfbec:
      uStack_1e8._4_1_ = (byte)((ulong)uStack_1e8 >> 0x20);
joined_r0x001cfcf0:
      if (param_8 != (byte *)0x0) {
        param_8[(ulong)(uVar316 + 2) & 3] = uStack_1e8._4_1_;
        *param_8 = fStack_264._0_1_;
        param_8[1] = fStack_254._0_1_;
        param_8[2] = local_244._0_1_;
        param_8[(int)uVar316] = fStack_204._0_1_;
        (param_8 + (int)uVar316)[1] = fStack_1f4._0_1_;
        param_8[4] = (byte)uVar25 | (byte)(uVar316 << 6);
      }
      return *(int *)(param_6 + 6) != 0;
    }
    if (!(bool)(bVar22 | bVar23)) {
LAB_001cf2b4:
      uVar36 = 0;
    }
    else {
      if (3 < iVar83) {
        uVar36 = 1;
        goto LAB_001cf2b8;
      }
      auVar253 = auVar76;
      if (iVar83 != 2) {
        fVar155 = fVar84 + fVar155;
        fVar189 = fVar85 + fVar189;
        pauVar35 = (undefined1 (*) [16])&local_200;
        if (uVar316 != 1) {
          pauVar35 = (undefined1 (*) [16])&local_260;
        }
        if (0.0 < fVar155) {
          fVar155 = fVar155 * fVar155;
          fVar189 = fVar189 * fVar189;
          iVar83 = -(uint)(uVar316 == 1);
          auVar15._4_4_ = fStack_2dc;
          auVar15._0_4_ = fVar86;
          auVar15._8_4_ = fStack_2d8;
          auVar15._12_4_ = fStack_2d4;
          auVar223._0_8_ = CONCAT44(iVar83,iVar83);
          auVar223._8_4_ = iVar83;
          auVar223._12_4_ = iVar83;
          auVar312[1] = (byte)((uint)fVar314 >> 8) & ~(byte)((uint)iVar365 >> 8);
          auVar312[0] = SUB41(fVar314,0) & ~(byte)iVar365;
          auVar312[2] = (byte)((uint)fVar314 >> 0x10) & ~(byte)((uint)iVar365 >> 0x10);
          auVar312[3] = (byte)((uint)fVar314 >> 0x18) & ~(byte)((uint)iVar365 >> 0x18);
          auVar312[4] = SUB41(fVar326,0) & ~(byte)iVar372;
          auVar312[5] = (byte)((uint)fVar326 >> 8) & ~(byte)((uint)iVar372 >> 8);
          auVar312[6] = (byte)((uint)fVar326 >> 0x10) & ~(byte)((uint)iVar372 >> 0x10);
          auVar312[7] = (byte)((uint)fVar326 >> 0x18) & ~(byte)((uint)iVar372 >> 0x18);
          auVar312[8] = SUB41(fVar330,0) & ~(byte)iVar373;
          auVar312[9] = (byte)((uint)fVar330 >> 8) & ~(byte)((uint)iVar373 >> 8);
          auVar312[10] = (byte)((uint)fVar330 >> 0x10) & ~(byte)((uint)iVar373 >> 0x10);
          auVar312[0xb] = (byte)((uint)fVar330 >> 0x18) & ~(byte)((uint)iVar373 >> 0x18);
          auVar312[0xc] = (byte)uVar150 & ~(byte)iVar374;
          auVar312[0xd] = bVar332 & ~(byte)((uint)iVar374 >> 8);
          auVar312[0xe] = bVar333 & ~(byte)((uint)iVar374 >> 0x10);
          auVar312[0xf] = bVar334 & ~(byte)((uint)iVar374 >> 0x18);
          auVar227._8_8_ = auVar223._8_8_;
          auVar227._0_8_ = auVar223._0_8_;
          auVar311._8_8_ = auVar223._8_8_;
          auVar311._0_8_ = auVar223._0_8_;
          auVar432 = auVar16 ^ (auVar16 ^ auVar228) & auVar223;
          auVar228 = auVar228 ^ (auVar228 ^ auVar16) & auVar227;
          auVar156 = *pauVar35;
          auVar312 = auVar312 ^ (auVar312 ^ auVar15) & auVar311;
          fVar295 = auVar312._4_4_;
          fVar190 = auVar156._0_4_ - auVar432._0_4_;
          fVar354 = auVar156._4_4_ - auVar432._4_4_;
          fVar356 = auVar156._8_4_ - auVar432._8_4_;
          fVar357 = auVar312._8_4_;
          fVar287 = auVar228._0_4_;
          auVar200._0_4_ = fVar287 - auVar156._0_4_;
          fVar291 = auVar228._4_4_;
          auVar200._4_4_ = fVar291 - auVar156._4_4_;
          fVar315 = auVar228._8_4_;
          auVar200._8_4_ = fVar315 - auVar156._8_4_;
          fVar327 = auVar228._12_4_;
          auVar200._12_4_ = fVar327 - auVar156._12_4_;
          fVar394 = fVar356 * fVar356 + fVar190 * fVar190 + fVar354 * fVar354;
          fVar405 = fVar356 * fVar356 + fVar190 * fVar190 + fVar354 * fVar354;
          uVar375 = CONCAT44(fVar405,fVar394);
          uVar91 = NEON_frecpe(uVar375,4);
          uVar337 = NEON_frecps(uVar375,uVar91,4);
          fVar114 = (float)uVar91 * (float)uVar337;
          fVar118 = (float)((ulong)uVar91 >> 0x20) * (float)((ulong)uVar337 >> 0x20);
          uVar91 = NEON_frecps(uVar375,CONCAT44(fVar118,fVar114),4);
          iVar83 = -(uint)(fVar394 == 0.0);
          iVar115 = -(uint)(fVar405 == 0.0);
          uVar34 = CONCAT44(fVar118 * (float)((ulong)uVar91 >> 0x20),fVar114 * (float)uVar91) &
                   CONCAT17(~(byte)((uint)iVar115 >> 0x18),
                            CONCAT16(~(byte)((uint)iVar115 >> 0x10),
                                     CONCAT15(~(byte)((uint)iVar115 >> 8),
                                              CONCAT14(~(byte)iVar115,
                                                       CONCAT13(~(byte)((uint)iVar83 >> 0x18),
                                                                CONCAT12(~(byte)((uint)iVar83 >>
                                                                                0x10),
                                                                         CONCAT11(~(byte)((uint)
                                                  iVar83 >> 8),~(byte)iVar83)))))));
          auVar141._0_4_ = fVar287 - auVar432._0_4_;
          auVar141._4_4_ = fVar291 - auVar432._4_4_;
          auVar141._8_4_ = fVar315 - auVar432._8_4_;
          auVar141._12_4_ = fVar327 - auVar432._12_4_;
          fVar118 = (float)uVar34;
          fVar289 = fVar190 * fVar118;
          fVar204 = (float)(uVar34 >> 0x20);
          fVar205 = fVar354 * fVar204;
          fVar118 = fVar356 * fVar118;
          fVar204 = (auVar156._12_4_ - auVar432._12_4_) * fVar204;
          fVar288 = auVar312._0_4_;
          fVar336 = auVar141._8_4_ * fVar356 + auVar141._0_4_ * fVar190 + auVar141._4_4_ * fVar354;
          fVar352 = auVar141._8_4_ * fVar356 + auVar141._0_4_ * fVar190 + auVar141._4_4_ * fVar354;
          fVar449 = fVar357 * fVar356 + fVar288 * fVar190 + fVar295 * fVar354;
          fVar452 = fVar357 * fVar356 + fVar288 * fVar190 + fVar295 * fVar354;
          fVar354 = auVar141._0_4_ - fVar336 * fVar289;
          fVar114 = auVar141._4_4_ - fVar352 * fVar205;
          fVar212 = auVar141._8_4_ - fVar336 * fVar118;
          fVar329 = auVar141._12_4_ - fVar352 * fVar204;
          auVar371._0_4_ = fVar288 - fVar289 * fVar449;
          auVar371._4_4_ = fVar295 - fVar205 * fVar452;
          auVar371._8_4_ = fVar357 - fVar118 * fVar449;
          auVar371._12_4_ = auVar312._12_4_ - fVar204 * fVar452;
          auVar252 = NEON_ext(auVar141,auVar141,8,1);
          auVar224 = NEON_ext(auVar200,auVar200,8,1);
          auVar282._0_4_ = fVar357 * fVar357 + fVar288 * fVar288 + fVar295 * fVar295;
          auVar282._4_4_ = fVar357 * fVar357 + fVar288 * fVar288 + fVar295 * fVar295;
          auVar282._8_4_ =
               auVar371._8_4_ * auVar371._8_4_ +
               auVar371._0_4_ * auVar371._0_4_ + auVar371._4_4_ * auVar371._4_4_;
          auVar282._12_4_ =
               auVar371._8_4_ * auVar371._8_4_ +
               auVar371._0_4_ * auVar371._0_4_ + auVar371._4_4_ * auVar371._4_4_;
          auVar230 = NEON_frsqrte(auVar282,4);
          iVar407 = -(uint)(0.0 < auVar282._0_4_);
          iVar419 = -(uint)(0.0 < auVar282._4_4_);
          iVar423 = -(uint)(0.0 < auVar282._8_4_);
          iVar427 = -(uint)(0.0 < auVar282._12_4_);
          fVar190 = auVar230._0_4_;
          auVar219._0_4_ = fVar190 * fVar190;
          fVar356 = auVar230._4_4_;
          auVar219._4_4_ = fVar356 * fVar356;
          fVar118 = auVar230._8_4_;
          auVar219._8_4_ = fVar118 * fVar118;
          fVar289 = auVar230._12_4_;
          auVar219._12_4_ = fVar289 * fVar289;
          auVar230 = NEON_frsqrts(auVar282,auVar219,4);
          fVar190 = fVar190 * auVar230._0_4_;
          fVar356 = fVar356 * auVar230._4_4_;
          fVar118 = fVar118 * auVar230._8_4_;
          fVar289 = fVar289 * auVar230._12_4_;
          auVar220._0_4_ = fVar190 * fVar190;
          auVar220._4_4_ = fVar356 * fVar356;
          auVar220._8_4_ = fVar118 * fVar118;
          auVar220._12_4_ = fVar289 * fVar289;
          auVar230 = NEON_frsqrts(auVar282,auVar220,4);
          fVar190 = auVar230._0_4_ * fVar190;
          fVar356 = auVar230._4_4_ * fVar356;
          fVar118 = auVar230._8_4_ * fVar118;
          fVar289 = auVar230._12_4_ * fVar289;
          bVar77 = (byte)((uint)iVar407 >> 8);
          bVar78 = (byte)((uint)iVar407 >> 0x10);
          bVar418 = (byte)((uint)iVar407 >> 0x18);
          fVar331 = (float)CONCAT13(bVar418 & (byte)((uint)fVar190 >> 0x18),
                                    CONCAT12(bVar78 & (byte)((uint)fVar190 >> 0x10),
                                             CONCAT11(bVar77 & (byte)((uint)fVar190 >> 8),
                                                      (byte)iVar407 & SUB41(fVar190,0))));
          bVar420 = (byte)((uint)iVar419 >> 8);
          bVar421 = (byte)((uint)iVar419 >> 0x10);
          bVar422 = (byte)((uint)iVar419 >> 0x18);
          auVar256._0_8_ =
               CONCAT17(bVar422 & (byte)((uint)fVar356 >> 0x18),
                        CONCAT16(bVar421 & (byte)((uint)fVar356 >> 0x10),
                                 CONCAT15(bVar420 & (byte)((uint)fVar356 >> 8),
                                          CONCAT14((byte)iVar419 & SUB41(fVar356,0),fVar331))));
          auVar256[8] = (byte)iVar423 & SUB41(fVar118,0);
          bVar424 = (byte)((uint)iVar423 >> 8);
          auVar256[9] = bVar424 & (byte)((uint)fVar118 >> 8);
          bVar425 = (byte)((uint)iVar423 >> 0x10);
          auVar256[10] = bVar425 & (byte)((uint)fVar118 >> 0x10);
          bVar426 = (byte)((uint)iVar423 >> 0x18);
          auVar256[0xb] = bVar426 & (byte)((uint)fVar118 >> 0x18);
          auVar283[0xc] = (byte)iVar427 & SUB41(fVar289,0);
          auVar283._0_12_ = auVar256;
          bVar428 = (byte)((uint)iVar427 >> 8);
          auVar283[0xd] = bVar428 & (byte)((uint)fVar289 >> 8);
          bVar429 = (byte)((uint)iVar427 >> 0x10);
          auVar283[0xe] = bVar429 & (byte)((uint)fVar289 >> 0x10);
          bVar430 = (byte)((uint)iVar427 >> 0x18);
          auVar283[0xf] = bVar430 & (byte)((uint)fVar289 >> 0x18);
          fVar290 = (float)((ulong)auVar256._0_8_ >> 0x20);
          fVar292 = auVar256._8_4_;
          fVar293 = auVar283._12_4_;
          fVar363 = (auVar252._0_4_ * fVar357 + auVar141._0_4_ * fVar288 + auVar141._4_4_ * fVar295)
                    * fVar331 * fVar331;
          fVar364 = (auVar224._0_4_ * fVar357 + auVar200._0_4_ * fVar288 + auVar200._4_4_ * fVar295)
                    * fVar290 * fVar290;
          fVar254 = (fVar212 * auVar371._8_4_ + fVar354 * auVar371._0_4_ + fVar114 * auVar371._4_4_)
                    * fVar292 * fVar292;
          fVar255 = (fVar212 * auVar371._8_4_ + fVar354 * auVar371._0_4_ + fVar114 * auVar371._4_4_)
                    * fVar293 * fVar293;
          fVar190 = auVar141._0_4_ - fVar288 * fVar363;
          fVar356 = auVar200._0_4_ - fVar288 * fVar364;
          fVar118 = fVar354 - auVar371._0_4_ * fVar254;
          fVar289 = fVar354 - auVar371._0_4_ * fVar255;
          fVar204 = auVar141._4_4_ - fVar295 * fVar363;
          fVar205 = auVar200._4_4_ - fVar295 * fVar364;
          fVar288 = fVar114 - auVar371._4_4_ * fVar254;
          fVar295 = fVar114 - auVar371._4_4_ * fVar255;
          fVar308 = auVar252._0_4_ - fVar357 * fVar363;
          fVar357 = auVar224._0_4_ - fVar357 * fVar364;
          fVar313 = fVar212 - auVar371._8_4_ * fVar254;
          fVar317 = fVar212 - auVar371._8_4_ * fVar255;
          fVar190 = fVar308 * fVar308 + fVar190 * fVar190 + fVar204 * fVar204;
          fVar356 = fVar357 * fVar357 + fVar356 * fVar356 + fVar205 * fVar205;
          fVar118 = fVar313 * fVar313 + fVar118 * fVar118 + fVar288 * fVar288;
          fVar289 = fVar317 * fVar317 + fVar289 * fVar289 + fVar295 * fVar295;
          iVar83 = -(uint)(fVar190 < fVar155);
          iVar115 = -(uint)(fVar356 < fVar189);
          iVar144 = -(uint)(fVar118 < fVar155);
          iVar245 = -(uint)(fVar289 < fVar189);
          if (((iVar83 != 0 || iVar115 != 0) || iVar144 != 0) || iVar245 != 0) {
            auVar64._0_4_ = fVar155 - fVar190;
            auVar64._4_4_ = fVar189 - fVar356;
            auVar64._8_4_ = fVar155 - fVar118;
            auVar64._12_4_ = fVar189 - fVar289;
            iVar88 = -(uint)(auVar64._0_4_ == 0.0);
            iVar116 = -(uint)(auVar64._4_4_ == 0.0);
            iVar119 = -(uint)(auVar64._8_4_ == 0.0);
            iVar121 = -(uint)(auVar64._12_4_ == 0.0);
            auVar252 = NEON_frsqrte(auVar64,4);
            fVar189 = auVar252._0_4_;
            auVar201._0_4_ = fVar189 * fVar189;
            fVar155 = auVar252._4_4_;
            auVar201._4_4_ = fVar155 * fVar155;
            fVar190 = auVar252._8_4_;
            auVar201._8_4_ = fVar190 * fVar190;
            fVar356 = auVar252._12_4_;
            auVar201._12_4_ = fVar356 * fVar356;
            auVar252 = *(undefined1 (*) [16])(PTR_DAT_043724a8 + 0x30);
            auVar224 = NEON_frsqrts(auVar64,auVar201,4);
            fVar189 = fVar189 * auVar224._0_4_;
            fVar155 = fVar155 * auVar224._4_4_;
            fVar190 = fVar190 * auVar224._8_4_;
            fVar356 = fVar356 * auVar224._12_4_;
            auVar202._0_4_ = fVar189 * fVar189;
            auVar202._4_4_ = fVar155 * fVar155;
            auVar202._8_4_ = fVar190 * fVar190;
            auVar202._12_4_ = fVar356 * fVar356;
            auVar224 = NEON_frsqrts(auVar64,auVar202,4);
            fVar189 = auVar64._0_4_ * auVar224._0_4_ * fVar189;
            fVar155 = auVar64._4_4_ * auVar224._4_4_ * fVar155;
            fVar190 = auVar64._8_4_ * auVar224._8_4_ * fVar190;
            fVar356 = auVar64._12_4_ * auVar224._12_4_ * fVar356;
            iVar89 = -(uint)(0.0 <= fVar336);
            iVar117 = -(uint)(0.0 <= fVar352);
            iVar120 = -(uint)(0.0 <= fVar336);
            iVar122 = -(uint)(0.0 <= fVar352);
            bVar229 = (byte)iVar83;
            bVar233 = (byte)((uint)iVar83 >> 8);
            bVar234 = (byte)((uint)iVar83 >> 0x10);
            bVar235 = (byte)((uint)iVar83 >> 0x18);
            fVar189 = (float)CONCAT13((byte)((uint)fVar189 >> 0x18) & ~(byte)((uint)iVar88 >> 0x18)
                                      & bVar235,
                                      CONCAT12((byte)((uint)fVar189 >> 0x10) &
                                               ~(byte)((uint)iVar88 >> 0x10) & bVar234,
                                               CONCAT11((byte)((uint)fVar189 >> 8) &
                                                        ~(byte)((uint)iVar88 >> 8) & bVar233,
                                                        SUB41(fVar189,0) & ~(byte)iVar88 & bVar229))
                                     );
            bVar236 = (byte)iVar115;
            bVar237 = (byte)((uint)iVar115 >> 8);
            bVar238 = (byte)((uint)iVar115 >> 0x10);
            bVar239 = (byte)((uint)iVar115 >> 0x18);
            auVar42._0_8_ =
                 CONCAT17((byte)((uint)fVar155 >> 0x18) & ~(byte)((uint)iVar116 >> 0x18) & bVar239,
                          CONCAT16((byte)((uint)fVar155 >> 0x10) & ~(byte)((uint)iVar116 >> 0x10) &
                                   bVar238,CONCAT15((byte)((uint)fVar155 >> 8) &
                                                    ~(byte)((uint)iVar116 >> 8) & bVar237,
                                                    CONCAT14(SUB41(fVar155,0) & ~(byte)iVar116 &
                                                             bVar236,fVar189))));
            bVar240 = (byte)iVar144;
            auVar42[8] = SUB41(fVar190,0) & ~(byte)iVar119 & bVar240;
            bVar241 = (byte)((uint)iVar144 >> 8);
            auVar42[9] = (byte)((uint)fVar190 >> 8) & ~(byte)((uint)iVar119 >> 8) & bVar241;
            bVar242 = (byte)((uint)iVar144 >> 0x10);
            auVar42[10] = (byte)((uint)fVar190 >> 0x10) & ~(byte)((uint)iVar119 >> 0x10) & bVar242;
            bVar243 = (byte)((uint)iVar144 >> 0x18);
            auVar42[0xb] = (byte)((uint)fVar190 >> 0x18) & ~(byte)((uint)iVar119 >> 0x18) & bVar243;
            bVar244 = (byte)iVar245;
            auVar65[0xc] = SUB41(fVar356,0) & ~(byte)iVar121 & bVar244;
            auVar65._0_12_ = auVar42;
            bVar246 = (byte)((uint)iVar245 >> 8);
            auVar65[0xd] = (byte)((uint)fVar356 >> 8) & ~(byte)((uint)iVar121 >> 8) & bVar246;
            bVar247 = (byte)((uint)iVar245 >> 0x10);
            auVar65[0xe] = (byte)((uint)fVar356 >> 0x10) & ~(byte)((uint)iVar121 >> 0x10) & bVar247;
            bVar248 = (byte)((uint)iVar245 >> 0x18);
            auVar65[0xf] = (byte)((uint)fVar356 >> 0x18) & ~(byte)((uint)iVar121 >> 0x18) & bVar248;
            iVar88 = -(uint)(fVar336 <= fVar394);
            iVar116 = -(uint)(fVar352 <= fVar405);
            iVar119 = -(uint)(fVar336 <= fVar394);
            iVar121 = -(uint)(fVar352 <= fVar405);
            fVar331 = fVar331 * fVar189;
            fVar290 = fVar290 * (float)((ulong)auVar42._0_8_ >> 0x20);
            fVar292 = fVar292 * auVar42._8_4_;
            fVar293 = fVar293 * auVar65._12_4_;
            iVar83 = -(uint)(ABS(fVar363) <= fVar331);
            iVar115 = -(uint)(ABS(fVar364) <= fVar290);
            iVar144 = -(uint)(ABS(fVar254) <= fVar292);
            iVar245 = -(uint)(ABS(fVar255) <= fVar293);
            iVar83 = CONCAT13((auVar252[3] |
                              (byte)((uint)iVar88 >> 0x18) & (byte)((uint)iVar89 >> 0x18)) &
                              (byte)((uint)iVar83 >> 0x18) & bVar235,
                              CONCAT12((auVar252[2] |
                                       (byte)((uint)iVar88 >> 0x10) & (byte)((uint)iVar89 >> 0x10))
                                       & (byte)((uint)iVar83 >> 0x10) & bVar234,
                                       CONCAT11((auVar252[1] |
                                                (byte)((uint)iVar88 >> 8) &
                                                (byte)((uint)iVar89 >> 8)) &
                                                (byte)((uint)iVar83 >> 8) & bVar233,
                                                (auVar252[0] | (byte)iVar88 & (byte)iVar89) &
                                                (byte)iVar83 & bVar229)));
            auVar43._0_8_ =
                 CONCAT17((auVar252[7] |
                          (byte)((uint)iVar116 >> 0x18) & (byte)((uint)iVar117 >> 0x18)) &
                          (byte)((uint)iVar115 >> 0x18) & bVar239,
                          CONCAT16((auVar252[6] |
                                   (byte)((uint)iVar116 >> 0x10) & (byte)((uint)iVar117 >> 0x10)) &
                                   (byte)((uint)iVar115 >> 0x10) & bVar238,
                                   CONCAT15((auVar252[5] |
                                            (byte)((uint)iVar116 >> 8) & (byte)((uint)iVar117 >> 8))
                                            & (byte)((uint)iVar115 >> 8) & bVar237,
                                            CONCAT14((auVar252[4] | (byte)iVar116 & (byte)iVar117) &
                                                     (byte)iVar115 & bVar236,iVar83))));
            auVar43[8] = (auVar252[8] | (byte)iVar119 & (byte)iVar120) & (byte)iVar144 & bVar240;
            auVar43[9] = (auVar252[9] | (byte)((uint)iVar119 >> 8) & (byte)((uint)iVar120 >> 8)) &
                         (byte)((uint)iVar144 >> 8) & bVar241;
            auVar43[10] = (auVar252[10] |
                          (byte)((uint)iVar119 >> 0x10) & (byte)((uint)iVar120 >> 0x10)) &
                          (byte)((uint)iVar144 >> 0x10) & bVar242;
            auVar43[0xb] = (auVar252[0xb] |
                           (byte)((uint)iVar119 >> 0x18) & (byte)((uint)iVar120 >> 0x18)) &
                           (byte)((uint)iVar144 >> 0x18) & bVar243;
            auVar66[0xc] = (auVar252[0xc] | (byte)iVar121 & (byte)iVar122) & (byte)iVar245 & bVar244
            ;
            auVar66._0_12_ = auVar43;
            auVar66[0xd] = (auVar252[0xd] | (byte)((uint)iVar121 >> 8) & (byte)((uint)iVar122 >> 8))
                           & (byte)((uint)iVar245 >> 8) & bVar246;
            auVar66[0xe] = (auVar252[0xe] |
                           (byte)((uint)iVar121 >> 0x10) & (byte)((uint)iVar122 >> 0x10)) &
                           (byte)((uint)iVar245 >> 0x10) & bVar247;
            auVar66[0xf] = (auVar252[0xf] |
                           (byte)((uint)iVar121 >> 0x18) & (byte)((uint)iVar122 >> 0x18)) &
                           (byte)((uint)iVar245 >> 0x18) & bVar248;
            if (((iVar83 == 0 && (int)((ulong)auVar43._0_8_ >> 0x20) == 0) && auVar43._8_4_ == 0) &&
                auVar66._12_4_ == 0) {
              auVar284._0_4_ = (0.0 - fVar363) - fVar331;
              auVar284._4_4_ = (0.0 - fVar364) - fVar290;
              auVar284._8_4_ = (0.0 - fVar254) - fVar292;
              auVar284._12_4_ = (0.0 - fVar255) - fVar293;
              iVar88 = -(uint)(0.0 - fVar336 <= fVar449 * auVar284._0_4_);
              iVar89 = -(uint)(0.0 - fVar352 <= fVar452 * auVar284._4_4_);
              iVar116 = -(uint)(0.0 - fVar336 <= fVar449 * auVar284._8_4_);
              iVar119 = -(uint)(0.0 - fVar352 <= fVar452 * auVar284._12_4_);
              iVar83 = -(uint)(fVar449 * auVar284._0_4_ <= fVar394 - fVar336);
              iVar115 = -(uint)(fVar452 * auVar284._4_4_ <= fVar405 - fVar352);
              iVar144 = -(uint)(fVar449 * auVar284._8_4_ <= fVar394 - fVar336);
              iVar245 = -(uint)(fVar452 * auVar284._12_4_ <= fVar405 - fVar352);
              bVar79 = (byte)iVar144 & (byte)iVar116;
              bVar80 = (byte)((uint)iVar144 >> 8) & (byte)((uint)iVar116 >> 8);
              bVar81 = (byte)((uint)iVar144 >> 0x10) & (byte)((uint)iVar116 >> 0x10);
              bVar82 = (byte)((uint)iVar144 >> 0x18) & (byte)((uint)iVar116 >> 0x18);
              iVar121 = -(uint)(auVar284._0_4_ <= auVar45._0_4_);
              iVar122 = -(uint)(auVar284._4_4_ <= auVar45._4_4_);
              iVar145 = -(uint)(auVar284._8_4_ <= auVar45._8_4_);
              iVar146 = -(uint)(auVar284._12_4_ <= auVar45._12_4_);
              iVar144 = -(uint)(0.0 <= auVar284._0_4_);
              iVar116 = -(uint)(0.0 <= auVar284._4_4_);
              iVar117 = -(uint)(0.0 <= auVar284._8_4_);
              iVar120 = -(uint)(0.0 <= auVar284._12_4_);
              iVar83 = CONCAT13((bVar82 & (byte)((uint)iVar83 >> 0x18) &
                                          (byte)((uint)iVar88 >> 0x18) ^ auVar252[3]) & bVar235 &
                                (byte)((uint)iVar121 >> 0x18) & (byte)((uint)iVar144 >> 0x18) &
                                bVar418,CONCAT12((bVar81 & (byte)((uint)iVar83 >> 0x10) &
                                                           (byte)((uint)iVar88 >> 0x10) ^
                                                 auVar252[2]) & bVar234 &
                                                 (byte)((uint)iVar121 >> 0x10) &
                                                 (byte)((uint)iVar144 >> 0x10) & bVar78,
                                                 CONCAT11((bVar80 & (byte)((uint)iVar83 >> 8) &
                                                                    (byte)((uint)iVar88 >> 8) ^
                                                          auVar252[1]) & bVar233 &
                                                          (byte)((uint)iVar121 >> 8) &
                                                          (byte)((uint)iVar144 >> 8) & bVar77,
                                                          (bVar79 & (byte)iVar83 & (byte)iVar88 ^
                                                          auVar252[0]) & bVar229 &
                                                          (byte)iVar121 & (byte)iVar144 &
                                                          (byte)iVar407)));
              auVar378._0_8_ =
                   CONCAT17((bVar82 & (byte)((uint)iVar115 >> 0x18) & (byte)((uint)iVar89 >> 0x18) ^
                            auVar252[7]) & bVar239 &
                            (byte)((uint)iVar122 >> 0x18) & (byte)((uint)iVar116 >> 0x18) & bVar422,
                            CONCAT16((bVar81 & (byte)((uint)iVar115 >> 0x10) &
                                               (byte)((uint)iVar89 >> 0x10) ^ auVar252[6]) & bVar238
                                     & (byte)((uint)iVar122 >> 0x10) & (byte)((uint)iVar116 >> 0x10)
                                     & bVar421,
                                     CONCAT15((bVar80 & (byte)((uint)iVar115 >> 8) &
                                                        (byte)((uint)iVar89 >> 8) ^ auVar252[5]) &
                                              bVar237 & (byte)((uint)iVar122 >> 8) &
                                                        (byte)((uint)iVar116 >> 8) & bVar420,
                                              CONCAT14((bVar79 & (byte)iVar115 & (byte)iVar89 ^
                                                       auVar252[4]) & bVar236 &
                                                       (byte)iVar122 & (byte)iVar116 & (byte)iVar419
                                                       ,iVar83))));
              auVar378[8] = (bVar79 ^ auVar252[8]) & bVar240 & (byte)iVar145 & (byte)iVar117 &
                            (byte)iVar423;
              auVar378[9] = (bVar80 ^ auVar252[9]) & bVar241 &
                            (byte)((uint)iVar145 >> 8) & (byte)((uint)iVar117 >> 8) & bVar424;
              auVar378[10] = (bVar81 ^ auVar252[10]) & bVar242 &
                             (byte)((uint)iVar145 >> 0x10) & (byte)((uint)iVar117 >> 0x10) & bVar425
              ;
              auVar378[0xb] =
                   (bVar82 ^ auVar252[0xb]) & bVar243 &
                   (byte)((uint)iVar145 >> 0x18) & (byte)((uint)iVar117 >> 0x18) & bVar426;
              auVar393[0xc] =
                   (bVar79 & (byte)iVar245 & (byte)iVar119 ^ auVar252[0xc]) & bVar244 &
                   (byte)iVar146 & (byte)iVar120 & (byte)iVar427;
              auVar393._0_12_ = auVar378;
              auVar393[0xd] =
                   (bVar80 & (byte)((uint)iVar245 >> 8) & (byte)((uint)iVar119 >> 8) ^ auVar252[0xd]
                   ) & bVar246 & (byte)((uint)iVar146 >> 8) & (byte)((uint)iVar120 >> 8) & bVar428;
              auVar393[0xe] =
                   (bVar81 & (byte)((uint)iVar245 >> 0x10) & (byte)((uint)iVar119 >> 0x10) ^
                   auVar252[0xe]) & bVar247 &
                   (byte)((uint)iVar146 >> 0x10) & (byte)((uint)iVar120 >> 0x10) & bVar429;
              auVar393[0xf] =
                   (bVar82 & (byte)((uint)iVar245 >> 0x18) & (byte)((uint)iVar119 >> 0x18) ^
                   auVar252[0xf]) & bVar248 &
                   (byte)((uint)iVar146 >> 0x18) & (byte)((uint)iVar120 >> 0x18) & bVar430;
              if (((iVar83 != 0 || (int)((ulong)auVar378._0_8_ >> 0x20) != 0) || auVar378._8_4_ != 0
                  ) || auVar393._12_4_ != 0) {
                auVar224 = auVar45 ^ (auVar45 ^ auVar284) & auVar393;
                auVar252 = NEON_ext(auVar224,auVar224,8,1);
                uVar91 = NEON_fminp(auVar224._0_8_,auVar224._0_8_,4);
                uVar34 = NEON_fmov(0xbf800000,4);
                uVar91 = NEON_fmin(CONCAT44(auVar252._0_4_,auVar252._0_4_),uVar91,4);
                uVar376 = NEON_fmov(0x3f800000,4);
                uVar34 = uVar34 ^ (uVar34 ^ uVar376) &
                                  CONCAT44(-(uint)(uVar316 == 1),-(uint)(uVar316 == 1));
                fVar189 = (float)uVar91;
                iVar83 = -(uint)(fVar189 == auVar224._0_4_);
                fVar155 = (float)((ulong)uVar91 >> 0x20);
                iVar115 = -(uint)(fVar155 == auVar224._4_4_);
                iVar144 = -(uint)(fVar189 == auVar224._8_4_);
                iVar245 = -(uint)(fVar155 == auVar224._12_4_);
                iVar83 = CONCAT13((byte)((uint)iVar83 >> 0x18) &
                                  (byte)((ulong)_DAT_03889700 >> 0x18),
                                  CONCAT12((byte)((uint)iVar83 >> 0x10) &
                                           (byte)((ulong)_DAT_03889700 >> 0x10),
                                           CONCAT11((byte)((uint)iVar83 >> 8) &
                                                    (byte)((ulong)_DAT_03889700 >> 8),
                                                    (byte)iVar83 & (byte)_DAT_03889700)));
                auVar44._0_8_ =
                     CONCAT17((byte)((uint)iVar115 >> 0x18) & (byte)((ulong)_DAT_03889700 >> 0x38),
                              CONCAT16((byte)((uint)iVar115 >> 0x10) &
                                       (byte)((ulong)_DAT_03889700 >> 0x30),
                                       CONCAT15((byte)((uint)iVar115 >> 8) &
                                                (byte)((ulong)_DAT_03889700 >> 0x28),
                                                CONCAT14((byte)iVar115 &
                                                         (byte)((ulong)_DAT_03889700 >> 0x20),iVar83
                                                        ))));
                auVar44[8] = (byte)iVar144 & (byte)_UNK_03889708;
                auVar44[9] = (byte)((uint)iVar144 >> 8) & (byte)((ulong)_UNK_03889708 >> 8);
                auVar44[10] = (byte)((uint)iVar144 >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x10);
                auVar44[0xb] = (byte)((uint)iVar144 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x18);
                auVar67[0xc] = (byte)iVar245 & (byte)((ulong)_UNK_03889708 >> 0x20);
                auVar67._0_12_ = auVar44;
                auVar67[0xd] = (byte)((uint)iVar245 >> 8) & (byte)((ulong)_UNK_03889708 >> 0x28);
                auVar67[0xe] = (byte)((uint)iVar245 >> 0x10) & (byte)((ulong)_UNK_03889708 >> 0x30);
                auVar67[0xf] = (byte)((uint)iVar245 >> 0x18) & (byte)((ulong)_UNK_03889708 >> 0x38);
                cVar5 = PTR_DAT_04372398
                        [(uint)(iVar83 + (int)((ulong)auVar44._0_8_ >> 0x20) +
                               auVar44._8_4_ + auVar67._12_4_)];
                if (cVar5 != '\x02') {
                  auVar68[0] = -(cVar5 == '\0');
                  auVar68[1] = auVar68[0];
                  auVar68[2] = auVar68[0];
                  auVar68[3] = auVar68[0];
                  auVar68[4] = auVar68[0];
                  auVar68[5] = auVar68[0];
                  auVar68[6] = auVar68[0];
                  auVar68[7] = auVar68[0];
                  auVar68[8] = auVar68[0];
                  auVar68[9] = auVar68[0];
                  auVar68[10] = auVar68[0];
                  auVar68[0xb] = auVar68[0];
                  auVar68[0xc] = auVar68[0];
                  auVar68[0xd] = auVar68[0];
                  auVar68[0xe] = auVar68[0];
                  auVar68[0xf] = auVar68[0];
                  auVar156 = auVar156 ^ (auVar156 ^ auVar432) & auVar68;
                  fVar354 = fVar287 - auVar156._0_4_;
                  fVar114 = fVar291 - auVar156._4_4_;
                  fVar212 = fVar315 - auVar156._8_4_;
                  fVar329 = fVar327 - auVar156._12_4_;
                  auVar371 = auVar312;
                }
                fVar354 = fVar354 + fVar189 * auVar371._0_4_;
                fVar114 = fVar114 + fVar155 * auVar371._4_4_;
                fVar212 = fVar212 + fVar189 * auVar371._8_4_;
                iVar83 = cVar5 + 1;
                fVar189 = fVar354 * fVar354 + fVar114 * fVar114 + fVar212 * fVar212;
                fVar356 = fVar354 * fVar354 + fVar114 * fVar114 + fVar212 * fVar212;
                uVar337 = CONCAT44(fVar356,fVar189);
                uVar375 = NEON_frsqrte(uVar337,4);
                fVar190 = (float)uVar375;
                fVar118 = (float)((ulong)uVar375 >> 0x20);
                uVar375 = NEON_frsqrts(uVar337,CONCAT44(fVar118 * fVar118,fVar190 * fVar190),4);
                fVar190 = fVar190 * (float)uVar375;
                fVar118 = fVar118 * (float)((ulong)uVar375 >> 0x20);
                iVar115 = -(uint)(fVar189 <= 0.0);
                iVar144 = -(uint)(fVar356 <= 0.0);
                uVar337 = NEON_frsqrts(uVar337,CONCAT44(fVar118 * fVar118,fVar190 * fVar190),4);
                fVar190 = (float)uVar337 * fVar190;
                fVar118 = (float)((ulong)uVar337 >> 0x20) * fVar118;
                fVar190 = (float)CONCAT13((byte)((uint)fVar190 >> 0x18) &
                                          ~(byte)((uint)iVar115 >> 0x18),
                                          CONCAT12((byte)((uint)fVar190 >> 0x10) &
                                                   ~(byte)((uint)iVar115 >> 0x10),
                                                   CONCAT11((byte)((uint)fVar190 >> 8) &
                                                            ~(byte)((uint)iVar115 >> 8),
                                                            SUB41(fVar190,0) & ~(byte)iVar115)));
                lVar28 = 4;
                fVar189 = (float)(CONCAT17((byte)((uint)fVar118 >> 0x18) &
                                           ~(byte)((uint)iVar144 >> 0x18),
                                           CONCAT16((byte)((uint)fVar118 >> 0x10) &
                                                    ~(byte)((uint)iVar144 >> 0x10),
                                                    CONCAT15((byte)((uint)fVar118 >> 8) &
                                                             ~(byte)((uint)iVar144 >> 8),
                                                             CONCAT14(SUB41(fVar118,0) &
                                                                      ~(byte)iVar144,fVar190)))) >>
                                 0x20);
                fVar114 = fVar114 * fVar189;
                fVar212 = fVar212 * fVar190;
                fVar189 = (fVar329 + fVar155 * auVar371._12_4_) * fVar189;
                bVar77 = (byte)(uVar34 >> 0x18);
                bVar78 = (byte)(uVar34 >> 0x38);
                uVar34 = CONCAT17(bVar78,(uint7)(bVar77 & 0x80) << 0x18) & 0x80ffffffffffffff;
                fVar155 = (float)CONCAT13((byte)(uVar34 >> 0x18) ^
                                          (byte)((uint)(fVar354 * fVar190) >> 0x18),
                                          SUB43(fVar354 * fVar190,0));
                auVar221._0_8_ =
                     CONCAT17((byte)(uVar34 >> 0x38) ^ (byte)((uint)fVar114 >> 0x18),
                              CONCAT16((char)((uint)fVar114 >> 0x10),
                                       CONCAT15((char)((uint)fVar114 >> 8),
                                                CONCAT14(SUB41(fVar114,0),fVar155))));
                auVar221[8] = SUB41(fVar212,0);
                auVar221[9] = (char)((uint)fVar212 >> 8);
                auVar221[10] = (char)((uint)fVar212 >> 0x10);
                auVar221[0xb] = bVar77 & 0x80 ^ (byte)((uint)fVar212 >> 0x18);
                auVar222[0xc] = SUB41(fVar189,0);
                auVar222._0_12_ = auVar221;
                auVar222[0xd] = (char)((uint)fVar189 >> 8);
                auVar222[0xe] = (char)((uint)fVar189 >> 0x10);
                auVar222[0xf] = bVar78 & 0x80 ^ (byte)((uint)fVar189 >> 0x18);
                fVar155 = -fVar155;
                fVar189 = -(float)((ulong)auVar221._0_8_ >> 0x20);
                fVar190 = -auVar221._8_4_;
                fVar354 = -auVar222._12_4_;
                uVar328 = local_150;
                switch(local_150 & 3) {
                case 1:
                  goto switchD_001cef90_caseD_1;
                case 2:
                  goto switchD_001cef90_caseD_2;
                case 3:
                  goto switchD_001cef90_caseD_3;
                }
                goto switchD_001cef90_caseD_0;
              }
            }
          }
        }
        goto LAB_001cf2b4;
      }
      fVar190 = fVar86 * (local_270 - local_210[0]);
      fVar354 = fStack_2dc * (fStack_26c - local_210[1]);
      fVar212 = fStack_2d8 * (fStack_268 - local_210[2]);
      fVar308 = fVar190 + fVar354 + fVar212;
      fVar212 = fVar190 + fVar354 + fVar212;
      fVar205 = fStack_2d8 * fStack_2d8 + fVar86 * fVar86 + fStack_2dc * fStack_2dc;
      fVar288 = fStack_2d8 * fStack_2d8 + fVar86 * fVar86 + fStack_2dc * fStack_2dc;
      uVar375 = CONCAT44(fVar288,fVar205);
      uVar91 = NEON_frecpe(uVar375,4);
      uVar337 = NEON_frecps(uVar375,uVar91,4);
      fVar289 = (float)uVar91 * (float)uVar337;
      fVar204 = (float)((ulong)uVar91 >> 0x20) * (float)((ulong)uVar337 >> 0x20);
      uVar91 = NEON_frecps(uVar375,CONCAT44(fVar204,fVar289),4);
      fVar289 = fVar289 * (float)uVar91;
      fVar204 = fVar204 * (float)((ulong)uVar91 >> 0x20);
      fVar114 = -fVar308;
      fVar118 = -fVar212;
      iVar83 = -(uint)(fVar205 == 0.0);
      iVar115 = -(uint)(fVar288 == 0.0);
      uVar34 = (CONCAT44(fVar204 * fVar118,fVar289 * fVar114) ^ 0x7f7fffee7f7fffee) &
               CONCAT17(~(byte)((uint)iVar115 >> 0x18),
                        CONCAT16(~(byte)((uint)iVar115 >> 0x10),
                                 CONCAT15(~(byte)((uint)iVar115 >> 8),
                                          CONCAT14(~(byte)iVar115,
                                                   CONCAT13(~(byte)((uint)iVar83 >> 0x18),
                                                            CONCAT12(~(byte)((uint)iVar83 >> 0x10),
                                                                     CONCAT11(~(byte)((uint)iVar83
                                                                                     >> 8),
                                                                              ~(byte)iVar83))))))) ^
               0x7f7fffee7f7fffee;
      fVar189 = fVar85 + fVar189;
      fVar356 = (float)uVar34;
      fVar190 = (local_270 - local_210[0]) + fVar86 * fVar356;
      fVar354 = (fStack_26c - local_210[1]) + fStack_2dc * (float)(uVar34 >> 0x20);
      fVar356 = (fStack_268 - local_210[2]) + fStack_2d8 * fVar356;
      uVar36 = 0;
      fVar190 = fVar190 * fVar190;
      fVar354 = fVar354 * fVar354;
      fVar356 = fVar356 * fVar356;
      fVar295 = fVar205 * ((fVar190 + fVar354 + fVar356) - (fVar84 + fVar155) * (fVar84 + fVar155));
      fVar288 = fVar288 * ((fVar190 + fVar354 + fVar356) - fVar189 * fVar189);
      fVar189 = -fVar295;
      fVar155 = -fVar288;
      uVar91 = CONCAT44(fVar155,fVar189);
      if (fVar189 < 0.0) goto LAB_001cf2b8;
      uVar337 = NEON_frsqrte(uVar91,4);
      fVar190 = (float)uVar337;
      fVar354 = (float)((ulong)uVar337 >> 0x20);
      uVar337 = NEON_frsqrts(uVar91,CONCAT44(fVar354 * fVar354,fVar190 * fVar190),4);
      fVar190 = fVar190 * (float)uVar337;
      fVar354 = fVar354 * (float)((ulong)uVar337 >> 0x20);
      uVar91 = NEON_frsqrts(uVar91,CONCAT44(fVar354 * fVar354,fVar190 * fVar190),4);
      iVar83 = -(uint)(0.0 <= fVar295);
      iVar115 = -(uint)(0.0 <= fVar288);
      fVar189 = (float)uVar91 * fVar190 * fVar189;
      fVar155 = (float)((ulong)uVar91 >> 0x20) * fVar354 * fVar155;
      fVar189 = (float)CONCAT13((byte)((uint)fVar189 >> 0x18) & ~(byte)((uint)iVar83 >> 0x18),
                                CONCAT12((byte)((uint)fVar189 >> 0x10) &
                                         ~(byte)((uint)iVar83 >> 0x10),
                                         CONCAT11((byte)((uint)fVar189 >> 8) &
                                                  ~(byte)((uint)iVar83 >> 8),
                                                  SUB41(fVar189,0) & ~(byte)iVar83)));
      fVar114 = fVar114 - fVar189;
      fVar155 = (float)(CONCAT17((byte)((uint)fVar155 >> 0x18) & ~(byte)((uint)iVar115 >> 0x18),
                                 CONCAT16((byte)((uint)fVar155 >> 0x10) &
                                          ~(byte)((uint)iVar115 >> 0x10),
                                          CONCAT15((byte)((uint)fVar155 >> 8) &
                                                   ~(byte)((uint)iVar115 >> 8),
                                                   CONCAT14(SUB41(fVar155,0) & ~(byte)iVar115,
                                                            fVar189)))) >> 0x20);
      fVar118 = fVar118 - fVar155;
      uVar34 = CONCAT44(fVar118,fVar114);
      uVar34 = uVar34 ^ (uVar34 ^ CONCAT44(fVar155 - fVar212,fVar189 - fVar308)) &
                        CONCAT44(-(uint)(fVar118 < 0.0),-(uint)(fVar114 < 0.0)) &
                        *(ulong *)PTR_DAT_043723a0;
      local_360 = auVar249._0_4_;
      fVar189 = (float)uVar34;
      if ((local_360 * fVar205 <= fVar189) || (fVar189 < 0.0)) goto LAB_001cf2b8;
      fVar289 = fVar289 * fVar189;
      fVar204 = fVar204 * (float)(uVar34 >> 0x20);
      uVar91 = CONCAT44(fVar204,fVar289);
      iVar83 = 0;
      lVar28 = 4;
      fVar189 = (local_270 + fVar86 * fVar289) - local_210[0];
      fVar155 = (fStack_26c + fStack_2dc * fVar204) - local_210[1];
      fVar190 = (fStack_268 + fStack_2d8 * fVar289) - local_210[2];
      fVar354 = fVar190 * fVar190 + fVar189 * fVar189 + fVar155 * fVar155;
      fVar114 = fVar190 * fVar190 + fVar189 * fVar189 + fVar155 * fVar155;
      uVar337 = CONCAT44(fVar114,fVar354);
      uVar375 = NEON_frsqrte(uVar337,4);
      fVar356 = (float)uVar375;
      fVar118 = (float)((ulong)uVar375 >> 0x20);
      uVar375 = NEON_frsqrts(uVar337,CONCAT44(fVar118 * fVar118,fVar356 * fVar356),4);
      fVar356 = fVar356 * (float)uVar375;
      fVar118 = fVar118 * (float)((ulong)uVar375 >> 0x20);
      iVar115 = -(uint)(fVar354 <= 0.0);
      iVar144 = -(uint)(fVar114 <= 0.0);
      uVar337 = NEON_frsqrts(uVar337,CONCAT44(fVar118 * fVar118,fVar356 * fVar356),4);
      fVar356 = (float)uVar337 * fVar356;
      fVar118 = (float)((ulong)uVar337 >> 0x20) * fVar118;
      fVar354 = (float)CONCAT13((byte)((uint)fVar356 >> 0x18) & ~(byte)((uint)iVar115 >> 0x18),
                                CONCAT12((byte)((uint)fVar356 >> 0x10) &
                                         ~(byte)((uint)iVar115 >> 0x10),
                                         CONCAT11((byte)((uint)fVar356 >> 8) &
                                                  ~(byte)((uint)iVar115 >> 8),
                                                  SUB41(fVar356,0) & ~(byte)iVar115)));
      auVar222._0_4_ = fVar189 * fVar354;
      fVar189 = (float)(CONCAT17((byte)((uint)fVar118 >> 0x18) & ~(byte)((uint)iVar144 >> 0x18),
                                 CONCAT16((byte)((uint)fVar118 >> 0x10) &
                                          ~(byte)((uint)iVar144 >> 0x10),
                                          CONCAT15((byte)((uint)fVar118 >> 8) &
                                                   ~(byte)((uint)iVar144 >> 8),
                                                   CONCAT14(SUB41(fVar118,0) & ~(byte)iVar144,
                                                            fVar354)))) >> 0x20);
      auVar222._4_4_ = fVar155 * fVar189;
      auVar222._8_4_ = fVar190 * fVar354;
      auVar222._12_4_ = ((fStack_264 + fStack_2d4 * fVar204) - fStack_204) * fVar189;
      fVar155 = -auVar222._0_4_;
      fVar189 = -auVar222._4_4_;
      fVar190 = -auVar222._8_4_;
      fVar354 = -auVar222._12_4_;
      switch(uVar328 & 3) {
      case 0:
switchD_001cef90_caseD_0:
        auVar156 = *pauVar1;
        auVar252 = *(undefined1 (*) [16])(*pauVar1 + 0xc);
        auVar224 = NEON_ext(auVar156,auVar156,8,1);
        auVar230 = NEON_ext(auVar252,auVar252,8,1);
        auVar188._0_4_ =
             fVar190 * auVar224._0_4_ + fVar155 * auVar156._0_4_ + fVar189 * auVar156._4_4_;
        auVar188._4_4_ =
             fVar190 * auVar230._0_4_ + fVar155 * auVar252._0_4_ + fVar189 * auVar252._4_4_;
        auVar188._8_4_ =
             fVar190 * *(float *)pauVar1[2] +
             fVar155 * *(float *)(pauVar1[1] + 8) + fVar189 * *(float *)(pauVar1[1] + 0xc);
        auVar188._12_4_ =
             fVar190 * *(float *)(pauVar1[2] + 0xc) +
             fVar155 * *(float *)(pauVar1[2] + 4) + fVar189 * *(float *)(pauVar1[2] + 8);
        if ((int)lVar28 < (int)uVar328) {
LAB_001cf638:
          iVar115 = (int)lVar28;
          pauVar35 = (undefined1 (*) [16])(pauVar1[1] + lVar28 * 0xc + 8);
          auVar348._0_4_ = iVar115 + iVar335;
          auVar348._4_4_ = iVar115 + iVar351;
          auVar348._8_4_ = iVar115 + iVar353;
          auVar348._12_4_ = iVar115 + iVar355;
          do {
            auVar156 = *(undefined1 (*) [16])(pauVar35[-2] + 8);
            lVar28 = lVar28 + 4;
            auVar252 = *(undefined1 (*) [16])(pauVar35[-1] + 4);
            auVar224 = *pauVar35;
            auVar230 = *(undefined1 (*) [16])(*pauVar35 + 0xc);
            auVar432 = NEON_ext(auVar156,auVar156,8,1);
            auVar358 = NEON_ext(auVar252,auVar252,8,1);
            auVar411 = NEON_ext(auVar224,auVar224,8,1);
            pauVar35 = pauVar35 + 3;
            auVar450 = NEON_ext(auVar230,auVar230,8,1);
            auVar70._0_4_ =
                 fVar190 * auVar432._0_4_ + fVar155 * auVar156._0_4_ + fVar189 * auVar156._4_4_;
            auVar70._4_4_ =
                 fVar190 * auVar358._0_4_ + fVar155 * auVar252._0_4_ + fVar189 * auVar252._4_4_;
            auVar70._8_4_ =
                 fVar190 * auVar411._0_4_ + fVar155 * auVar224._0_4_ + fVar189 * auVar224._4_4_;
            auVar70._12_4_ =
                 fVar190 * auVar450._0_4_ + fVar155 * auVar230._0_4_ + fVar189 * auVar230._4_4_;
            auVar285._0_4_ = -(uint)(auVar188._0_4_ < auVar70._0_4_);
            auVar285._4_4_ = -(uint)(auVar188._4_4_ < auVar70._4_4_);
            auVar285._8_4_ = -(uint)(auVar188._8_4_ < auVar70._8_4_);
            auVar285._12_4_ = -(uint)(auVar188._12_4_ < auVar70._12_4_);
            auVar188 = NEON_fmax(auVar70,auVar188,4);
            auVar253 = auVar253 ^ (auVar253 ^ auVar348) & auVar285;
            auVar349._0_4_ = auVar348._0_4_ + iVar147;
            auVar349._4_4_ = auVar348._4_4_ + iVar151;
            auVar349._8_4_ = auVar348._8_4_ + iVar13;
            auVar349._12_4_ = auVar348._12_4_ + iVar14;
            auVar348 = auVar349;
          } while (lVar28 < (int)uVar328);
        }
        break;
      case 1:
switchD_001cef90_caseD_1:
        fVar354 = *(float *)*pauVar1 * fVar155;
        fVar356 = *(float *)(*pauVar1 + 4) * fVar189;
        fVar114 = *(float *)(*pauVar1 + 8) * fVar190;
        auVar188._0_8_ = CONCAT44(fVar354 + fVar356 + fVar114,fVar354 + fVar356 + fVar114);
        auVar188._8_8_ = auVar188._0_8_;
        lVar28 = 1;
        auVar253 = ZEXT816(0);
        if (1 < (int)uVar328) goto LAB_001cf638;
        break;
      case 2:
switchD_001cef90_caseD_2:
        auVar69._0_4_ = *(float *)*pauVar1 * fVar155;
        auVar69._4_4_ = *(float *)(*pauVar1 + 4) * fVar189;
        auVar69._8_4_ = *(float *)(*pauVar1 + 8) * fVar190;
        auVar69._12_4_ = *(float *)(*pauVar1 + 0xc) * fVar354;
        auVar108._0_4_ = *(float *)(*pauVar1 + 0xc) * fVar155;
        auVar108._4_4_ = *(float *)pauVar1[1] * fVar189;
        auVar108._8_4_ = *(float *)(pauVar1[1] + 4) * fVar190;
        auVar108._12_4_ = *(float *)(pauVar1[1] + 8) * fVar354;
        auVar156 = NEON_ext(auVar69,auVar69,8,1);
        auVar252 = NEON_ext(auVar108,auVar108,8,1);
        auVar188._4_4_ = auVar108._0_4_ + auVar108._4_4_ + auVar252._0_4_;
        auVar188._0_4_ = auVar69._0_4_ + auVar69._4_4_ + auVar156._0_4_;
        lVar28 = 2;
        auVar188._8_8_ = uVar149;
        if (2 < (int)uVar328) goto LAB_001cf638;
        break;
      case 3:
switchD_001cef90_caseD_3:
        if (uVar328 != 3) {
          lVar28 = 3;
          goto switchD_001cef90_caseD_0;
        }
        auVar63._0_4_ = (float)*(undefined8 *)*pauVar1 * fVar155;
        auVar63._4_4_ = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20) * fVar189;
        auVar63._8_4_ = *(float *)(*pauVar1 + 8) * fVar190;
        auVar63._12_4_ = *(float *)(*pauVar1 + 8) * fVar354;
        auVar107._0_4_ = (float)*(undefined8 *)(*pauVar1 + 0xc) * fVar155;
        auVar107._4_4_ = (float)((ulong)*(undefined8 *)(*pauVar1 + 0xc) >> 0x20) * fVar189;
        auVar107._8_4_ = *(float *)(pauVar1[1] + 4) * fVar190;
        auVar107._12_4_ = *(float *)(pauVar1[1] + 4) * fVar354;
        auVar140._0_4_ = (float)*(undefined8 *)(pauVar1[1] + 8) * fVar155;
        auVar140._4_4_ = (float)((ulong)*(undefined8 *)(pauVar1[1] + 8) >> 0x20) * fVar189;
        auVar140._8_4_ = *(float *)pauVar1[2] * fVar190;
        auVar140._12_4_ = *(float *)pauVar1[2] * fVar354;
        auVar253 = NEON_ext(auVar63,auVar63,8,1);
        auVar156 = NEON_ext(auVar107,auVar107,8,1);
        auVar252 = NEON_ext(auVar140,auVar140,8,1);
        fVar189 = auVar253._0_4_ + auVar63._0_4_ + auVar63._4_4_;
        fVar155 = auVar156._0_4_ + auVar107._0_4_ + auVar107._4_4_;
        uVar337 = CONCAT44(fVar155,fVar189);
        fVar190 = auVar252._0_4_ + auVar140._0_4_ + auVar140._4_4_;
        uVar337 = NEON_fmaxp(uVar337,uVar337,4);
        uVar337 = NEON_fmax(CONCAT44(fVar190,fVar190),uVar337,4);
        uVar34 = (ulong)(char)PTR_DAT_043723d0
                              [(-(uint)((float)((ulong)uVar337 >> 0x20) <= fVar155) & 2) +
                               (uint)((float)uVar337 <= fVar189) |
                               -(uint)((float)uVar337 <= fVar190) & 4];
        auVar92 = *(undefined1 (*) [12])(*pauVar1 + uVar34 * 0xc);
        goto LAB_001cf6f8;
      }
      auVar156 = NEON_rev64(auVar188,4);
      auVar109._0_4_ = -(uint)(auVar156._0_4_ <= auVar188._0_4_);
      auVar109._4_4_ = -(uint)(auVar156._4_4_ <= auVar188._4_4_);
      auVar109._8_4_ = -(uint)(auVar156._8_4_ <= auVar188._8_4_);
      auVar109._12_4_ = -(uint)(auVar156._12_4_ <= auVar188._12_4_);
      auVar156 = NEON_fmax(auVar188,auVar156,4);
      auVar252 = NEON_rev64(auVar253,4);
      auVar252 = auVar252 ^ (auVar252 ^ auVar253) & auVar109;
      auVar253 = NEON_ext(auVar156,auVar156,8,1);
      auVar224 = NEON_ext(auVar252,auVar252,8,1);
      uVar376 = auVar224._0_8_ ^
                (auVar224._0_8_ ^ auVar252._0_8_) & (ulong)-(uint)(auVar253._0_4_ <= auVar156._0_4_)
      ;
      uVar34 = uVar376 & 0xffffffff;
      auVar92 = SUB1612(*(undefined1 (*) [16])(*pauVar1 + (long)(int)uVar376 * 0xc),0);
LAB_001cf6f8:
      pauVar1 = param_5 + 3;
      fVar114 = (float)((ulong)*(undefined8 *)(param_5[3] + 8) >> 0x20);
      fVar354 = (float)*(undefined8 *)*pauVar1;
      fVar356 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      lVar28 = 4;
      auVar253 = *pauVar2;
      auVar156 = param_5[2];
      fVar155 = auVar222._4_4_;
      fVar190 = auVar222._8_4_;
      fVar189 = auVar222._0_4_;
      fVar118 = fVar354 * fVar190 + auVar253._0_4_ * fVar189 + auVar156._0_4_ * fVar155;
      fVar212 = fVar356 * fVar190 + auVar253._4_4_ * fVar189 + auVar156._4_4_ * fVar155;
      fVar289 = (float)*(undefined8 *)(param_5[3] + 8) * fVar190 +
                auVar253._8_4_ * fVar189 + auVar156._8_4_ * fVar155;
      fVar204 = fVar114 * fVar190 + auVar253._12_4_ * fVar189 + auVar156._12_4_ * fVar155;
      auVar252 = auVar76;
      switch(local_160 & 3) {
      case 0:
switchD_001cf750_caseD_0:
        auVar224 = *pauVar20;
        auVar230 = *(undefined1 (*) [16])(*pauVar20 + 0xc);
        auVar432 = NEON_ext(auVar224,auVar224,8,1);
        auVar358 = NEON_ext(auVar230,auVar230,8,1);
        auVar350._0_4_ =
             fVar289 * auVar432._0_4_ + fVar118 * auVar224._0_4_ + fVar212 * auVar224._4_4_;
        auVar350._4_4_ =
             fVar289 * auVar358._0_4_ + fVar118 * auVar230._0_4_ + fVar212 * auVar230._4_4_;
        auVar350._8_4_ =
             fVar289 * *(float *)pauVar20[2] +
             fVar118 * *(float *)(pauVar20[1] + 8) + fVar212 * *(float *)(pauVar20[1] + 0xc);
        auVar350._12_4_ =
             fVar289 * *(float *)(pauVar20[2] + 0xc) +
             fVar118 * *(float *)(pauVar20[2] + 4) + fVar212 * *(float *)(pauVar20[2] + 8);
        if ((int)lVar28 < (int)local_160) {
LAB_001cf8e8:
          iVar115 = (int)lVar28;
          pauVar35 = (undefined1 (*) [16])(pauVar20[1] + lVar28 * 0xc + 8);
          auVar416._0_4_ = iVar115 + iVar335;
          auVar416._4_4_ = iVar115 + iVar351;
          auVar416._8_4_ = iVar115 + iVar353;
          auVar416._12_4_ = iVar115 + iVar355;
          do {
            auVar224 = *(undefined1 (*) [16])(pauVar35[-2] + 8);
            lVar28 = lVar28 + 4;
            auVar230 = *(undefined1 (*) [16])(pauVar35[-1] + 4);
            auVar432 = *pauVar35;
            auVar358 = *(undefined1 (*) [16])(*pauVar35 + 0xc);
            auVar450 = NEON_ext(auVar224,auVar224,8,1);
            auVar411 = NEON_ext(auVar230,auVar230,8,1);
            auVar105 = NEON_ext(auVar432,auVar432,8,1);
            pauVar35 = pauVar35 + 3;
            auVar435 = NEON_ext(auVar358,auVar358,8,1);
            auVar73._0_4_ =
                 fVar289 * auVar450._0_4_ + fVar118 * auVar224._0_4_ + fVar212 * auVar224._4_4_;
            auVar73._4_4_ =
                 fVar289 * auVar411._0_4_ + fVar118 * auVar230._0_4_ + fVar212 * auVar230._4_4_;
            auVar73._8_4_ =
                 fVar289 * auVar105._0_4_ + fVar118 * auVar432._0_4_ + fVar212 * auVar432._4_4_;
            auVar73._12_4_ =
                 fVar289 * auVar435._0_4_ + fVar118 * auVar358._0_4_ + fVar212 * auVar358._4_4_;
            auVar286._0_4_ = -(uint)(auVar350._0_4_ < auVar73._0_4_);
            auVar286._4_4_ = -(uint)(auVar350._4_4_ < auVar73._4_4_);
            auVar286._8_4_ = -(uint)(auVar350._8_4_ < auVar73._8_4_);
            auVar286._12_4_ = -(uint)(auVar350._12_4_ < auVar73._12_4_);
            auVar350 = NEON_fmax(auVar73,auVar350,4);
            auVar252 = auVar252 ^ (auVar252 ^ auVar416) & auVar286;
            auVar417._0_4_ = auVar416._0_4_ + iVar147;
            auVar417._4_4_ = auVar416._4_4_ + iVar151;
            auVar417._8_4_ = auVar416._8_4_ + iVar13;
            auVar417._12_4_ = auVar416._12_4_ + iVar14;
            auVar416 = auVar417;
          } while (lVar28 < (int)local_160);
        }
        break;
      case 1:
        fVar204 = fVar118 * *(float *)*pauVar20;
        fVar205 = fVar212 * *(float *)(*pauVar20 + 4);
        fVar288 = fVar289 * *(float *)(*pauVar20 + 8);
        auVar350._0_8_ = CONCAT44(fVar204 + fVar205 + fVar288,fVar204 + fVar205 + fVar288);
        auVar350._8_8_ = auVar350._0_8_;
        lVar28 = 1;
        auVar252 = ZEXT816(0);
        if (1 < (int)local_160) goto LAB_001cf8e8;
        break;
      case 2:
        auVar71._0_4_ = fVar118 * *(float *)*pauVar20;
        auVar71._4_4_ = fVar212 * *(float *)(*pauVar20 + 4);
        auVar71._8_4_ = fVar289 * *(float *)(*pauVar20 + 8);
        auVar71._12_4_ = fVar204 * *(float *)(*pauVar20 + 0xc);
        auVar110._0_4_ = fVar118 * *(float *)(*pauVar20 + 0xc);
        auVar110._4_4_ = fVar212 * *(float *)pauVar20[1];
        auVar110._8_4_ = fVar289 * *(float *)(pauVar20[1] + 4);
        auVar110._12_4_ = fVar204 * *(float *)(pauVar20[1] + 8);
        auVar224 = NEON_ext(auVar71,auVar71,8,1);
        auVar230 = NEON_ext(auVar110,auVar110,8,1);
        auVar350._4_4_ = auVar110._0_4_ + auVar110._4_4_ + auVar230._0_4_;
        auVar350._0_4_ = auVar71._0_4_ + auVar71._4_4_ + auVar224._0_4_;
        lVar28 = 2;
        auVar350._8_8_ = uVar149;
        if (2 < (int)local_160) goto LAB_001cf8e8;
        break;
      case 3:
        if (local_160 != 3) {
          lVar28 = 3;
          goto switchD_001cf750_caseD_0;
        }
        auVar72._0_4_ = fVar118 * (float)*(undefined8 *)*pauVar20;
        auVar72._4_4_ = fVar212 * (float)((ulong)*(undefined8 *)*pauVar20 >> 0x20);
        auVar72._8_4_ = fVar289 * *(float *)(*pauVar20 + 8);
        auVar72._12_4_ = fVar204 * *(float *)(*pauVar20 + 8);
        auVar111._0_4_ = fVar118 * (float)*(undefined8 *)(*pauVar20 + 0xc);
        auVar111._4_4_ = fVar212 * (float)((ulong)*(undefined8 *)(*pauVar20 + 0xc) >> 0x20);
        auVar111._8_4_ = fVar289 * *(float *)(pauVar20[1] + 4);
        auVar111._12_4_ = fVar204 * *(float *)(pauVar20[1] + 4);
        auVar142._0_4_ = fVar118 * (float)*(undefined8 *)(pauVar20[1] + 8);
        auVar142._4_4_ = fVar212 * (float)((ulong)*(undefined8 *)(pauVar20[1] + 8) >> 0x20);
        auVar142._8_4_ = fVar289 * *(float *)pauVar20[2];
        auVar142._12_4_ = fVar204 * *(float *)pauVar20[2];
        auVar252 = NEON_ext(auVar72,auVar72,8,1);
        auVar224 = NEON_ext(auVar111,auVar111,8,1);
        auVar230 = NEON_ext(auVar142,auVar142,8,1);
        fVar118 = auVar252._0_4_ + auVar72._0_4_ + auVar72._4_4_;
        fVar212 = auVar224._0_4_ + auVar111._0_4_ + auVar111._4_4_;
        uVar337 = CONCAT44(fVar212,fVar118);
        fVar289 = auVar230._0_4_ + auVar142._0_4_ + auVar142._4_4_;
        uVar337 = NEON_fmaxp(uVar337,uVar337,4);
        uVar337 = NEON_fmax(CONCAT44(fVar289,fVar289),uVar337,4);
        auVar39 = *(undefined1 (*) [12])
                   (*pauVar20 +
                   (long)(char)PTR_DAT_043723d0
                               [(-(uint)((float)((ulong)uVar337 >> 0x20) <= fVar212) & 2) +
                                (uint)((float)uVar337 <= fVar118) |
                                -(uint)((float)uVar337 <= fVar289) & 4] * 0xc);
        goto LAB_001cf9a4;
      }
      auVar224 = NEON_rev64(auVar350,4);
      auVar112._0_4_ = -(uint)(auVar224._0_4_ <= auVar350._0_4_);
      auVar112._4_4_ = -(uint)(auVar224._4_4_ <= auVar350._4_4_);
      auVar112._8_4_ = -(uint)(auVar224._8_4_ <= auVar350._8_4_);
      auVar112._12_4_ = -(uint)(auVar224._12_4_ <= auVar350._12_4_);
      auVar224 = NEON_fmax(auVar350,auVar224,4);
      auVar230 = NEON_rev64(auVar252,4);
      auVar230 = auVar230 ^ (auVar230 ^ auVar252) & auVar112;
      auVar252 = NEON_ext(auVar224,auVar224,8,1);
      auVar432 = NEON_ext(auVar230,auVar230,8,1);
      auVar39 = SUB1612(*(undefined1 (*) [16])
                         (*pauVar20 +
                         (long)(int)(auVar432._0_4_ ^
                                    (auVar432._0_4_ ^ auVar230._0_4_) &
                                    -(uint)(auVar252._0_4_ <= auVar224._0_4_)) * 0xc),0);
LAB_001cf9a4:
      auVar74._0_4_ = (local_270 - auVar92._0_4_) * fVar189;
      auVar74._4_4_ = (fStack_26c - auVar92._4_4_) * fVar155;
      auVar74._8_4_ = (fStack_268 - auVar92._8_4_) * fVar190;
      auVar74._12_4_ = (fStack_264 - (float)((uint)uVar34 | 0x3f000000)) * auVar222._12_4_;
      auVar252 = NEON_ext(auVar74,auVar74,8,1);
      uVar36 = 0;
      if (auVar74._0_4_ + auVar74._4_4_ + auVar252._0_4_ < fVar210) {
        auVar252 = NEON_ext(auVar253,auVar253,8,1);
        auVar224 = NEON_ext(auVar156,auVar156,8,1);
        auVar10._12_4_ = fVar114;
        auVar10._0_12_ = *(undefined1 (*) [12])*pauVar1;
        auVar11._12_4_ = fVar114;
        auVar11._0_12_ = *(undefined1 (*) [12])*pauVar1;
        auVar230 = NEON_ext(auVar10,auVar11,8,1);
        fVar114 = auVar39._0_4_ - *(float *)param_5[4];
        fVar118 = auVar39._4_4_ - *(float *)(param_5[4] + 4);
        fVar212 = auVar39._8_4_ - *(float *)(param_5[4] + 8);
        auVar75._0_4_ =
             (((auVar252._0_4_ * fVar212 + auVar253._0_4_ * fVar114 + auVar253._4_4_ * fVar118) -
              local_280[0]) - local_210[0]) * fVar189;
        auVar75._4_4_ =
             (((auVar224._0_4_ * fVar212 + auVar156._0_4_ * fVar114 + auVar156._4_4_ * fVar118) -
              local_280[1]) - local_210[1]) * fVar155;
        auVar75._8_4_ =
             (((auVar230._0_4_ * fVar212 + fVar354 * fVar114 + fVar356 * fVar118) - local_280[2]) -
             local_210[2]) * fVar190;
        auVar75._12_4_ =
             (((auVar230._4_4_ * fVar212 + fVar356 * fVar114 + auVar230._4_4_ * fVar118) -
              local_280[3]) - fStack_204) * auVar222._12_4_;
        auVar253 = NEON_ext(auVar75,auVar75,8,1);
        if (auVar75._0_4_ + auVar75._4_4_ + auVar253._0_4_ < fVar210) {
          fVar84 = (float)uVar91;
          fVar448 = fVar84 + fVar448;
          fVar85 = (float)((ulong)uVar91 >> 0x20);
          bVar22 = fVar448 < (float)*param_6;
          *(uint *)(param_6 + 6) = (uint)bVar22;
          if (bVar22) {
            if (iVar83 - 1U < 2) {
              if (iVar83 == 2) {
                if (uVar316 == 2) {
                  fStack_268 = fStack_258;
                  fStack_264 = fStack_254;
                  local_270 = local_260;
                  fStack_26c = fStack_25c;
                }
                else {
                  local_210[0] = local_200;
                  local_210[1] = fStack_1fc;
                  local_210[2] = fStack_1f8;
                  fStack_204 = fStack_1f4;
                }
              }
              uVar25 = 1;
              uVar316 = 1;
              local_b0 = 1;
              local_ac[0] = 1;
            }
            local_210[2] = local_210[2] - fVar143 * fVar84;
            fStack_204 = fStack_204 - fVar85 * 0.0;
            local_210[0] = local_210[0] - fVar123 * fVar84;
            local_210[1] = local_210[1] - fVar124 * fVar85;
            uVar125 = *(undefined8 *)param_5[6];
            uVar4 = uVar4 | 1;
            in_q8 = auVar222;
            local_2c0 = CONCAT44(fVar85 + fVar406,fVar448);
          }
          if (uVar4 != 0) goto LAB_001cfc84;
          goto LAB_001cfd18;
        }
      }
    }
LAB_001cf2b8:
    fVar113 = fVar113 - (float)*(undefined8 *)param_5[6];
    uVar376 = (ulong)local_ac[0];
    if (fVar84 < fVar113) {
      uVar34 = (ulong)local_b0;
      fVar189 = fVar143 * in_q8._8_4_ + fVar123 * fVar206 + fVar124 * fVar209;
      uVar91 = CONCAT44(fVar143 * in_q8._8_4_ + fVar123 * fVar206 + fVar124 * fVar209,fVar189);
      if (fVar189 < 0.0) {
        uVar337 = NEON_frecpe(uVar91,4);
        uVar375 = NEON_frecps(uVar91,uVar337,4);
        fVar189 = (float)uVar337 * (float)uVar375;
        fVar210 = (float)((ulong)uVar337 >> 0x20) * (float)((ulong)uVar375 >> 0x20);
        uVar91 = NEON_frecps(uVar91,CONCAT44(fVar210,fVar189),4);
        fVar189 = (fVar113 - fVar84) * fVar189 * (float)uVar91;
        fVar210 = ((fVar87 - (float)((ulong)*(undefined8 *)param_5[6] >> 0x20)) - fVar85) *
                  fVar210 * (float)((ulong)uVar91 >> 0x20);
        fVar448 = fVar448 - fVar189;
        fVar406 = fVar406 - fVar210;
        uVar91 = CONCAT44(fVar406,fVar448);
        if (fVar448 < (float)*param_6) {
          fVar189 = -fVar189;
          fVar210 = -fVar210;
          fVar155 = fVar123 * fVar189;
          fVar190 = fVar124 * fVar210;
          fVar189 = fVar143 * fVar189;
          fVar210 = fVar210 * 0.0;
          param_7 = (undefined8 *)0x0;
          auVar203._0_8_ = CONCAT44(local_1f0._4_4_ - fVar190,(float)local_1f0 - fVar155);
          auVar203._8_4_ = (float)uStack_1e8 - fVar189;
          auVar203._12_4_ = uStack_1e8._4_4_ - fVar210;
          local_210[2] = local_210[2] - fVar189;
          fStack_204 = fStack_204 - fVar210;
          local_210[0] = local_210[0] - fVar155;
          local_210[1] = local_210[1] - fVar190;
          fStack_1f8 = fStack_1f8 - fVar189;
          fStack_1f4 = fStack_1f4 - fVar210;
          local_200 = local_200 - fVar155;
          fStack_1fc = fStack_1fc - fVar190;
          uStack_1e8 = auVar203._8_8_;
          local_1f0 = auVar203._0_8_;
          fStack_1d8 = fStack_1d8 - fVar189;
          fStack_1d4 = fStack_1d4 - fVar210;
          local_1e0 = local_1e0 - fVar155;
          fStack_1dc = fStack_1dc - fVar190;
          local_2c8 = local_2c8 + 1;
          local_b8 = 0x3727c5ac3727c5ac;
          local_280[2] = fVar143 * fVar448;
          local_280[3] = fVar406 * 0.0;
          local_280[0] = fVar123 * fVar448;
          local_280[1] = fVar124 * fVar406;
          local_2c0 = uVar91;
          if ((uVar4 != 0 && ((int)uVar316 < (int)local_ac[0] || (int)uVar25 < (int)local_b0)) ||
             (local_2c8 < *(int *)(param_5[6] + 8))) goto LAB_001cf3dc;
          goto LAB_001cfcbc;
        }
      }
      if ((uVar4 == 0) || ((int)local_ac[0] <= (int)uVar316 && (int)local_b0 <= (int)uVar25)) {
        if (uVar3 == 0) goto LAB_001cfcec;
        iVar147 = *(int *)(param_6 + 6);
        goto LAB_001cfd04;
      }
    }
    uVar34 = (ulong)local_b0;
    param_7 = (undefined8 *)0x0;
  }
LAB_001cf3dc:
  bVar22 = uVar36 != 0;
  goto LAB_001cceec;
}


